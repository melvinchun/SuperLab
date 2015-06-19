rm: ejecutable
	rm *.o

ejecutable: Persona.o Persona_Adm.o Investigador.o Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o
			g++ main.cpp Persona.o Persona_Adm.o Investigador.o Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o -o exe

Persona.o: Persona_Adm.o Investigador.o Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o
		   g++ Persona.o

Persona_Adm.o: Investigador.o Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o
			   g++ Persona_Adm.o

Investigador.o: Forense.o Evidencia.o Casos.o Homicidio.o Secuestro.o
				g++ Investigador.o

Forense.o: Evidencia.o Casos.o Homicidio.o Secuestro.o
		   g++ Forense.o

Evidencia.o: Casos.o Homicidio.o Secuestro.o
			 g++ Evidencia.o

Casos.o: Homicidio.o Secuestro.o
		 g++ Casos.o

Homicidio.o: Secuestro.o
			 g++ Homicidio.o

Secuestro.o: 
			g++ Secuestro.o