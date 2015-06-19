rm: ejecutable
	rm *.o

ejecutable: Persona.o Persona_Adm.o Investigador.o Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o
			g++ main.cpp Persona.o Persona_Adm.o Investigador.o Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o -o exe

Persona.o: Persona_Adm.o Investigador.o Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o
		   g++ -c Persona.cpps

Persona_Adm.o: Investigador.o Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o
			   g++ -c Persona_Adm.cpp

Investigador.o: Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o
				g++ -c Investigador.cpp

Forense.o: Evidencia.o Casos.o Homicidio.o Secuestro.o
		   g++ -c Forense.cpp

Evidencia.o: Casos.o Homicidio.o Secuestro.o
			 g++ -c Evidencia.cpp

Casos.o: Homicidio.o Secuestro.o
		 g++ -c Casos.cpp

Homicidio.o: Secuestro.o
			 g++ -c Homicidio.cpp

Secuestro.o: 
			g++ -c Secuestro.cpp