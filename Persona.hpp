#ifndef PERSONA_H
#define PERSONA_H

#include <vector>
#include <string>

using std::string;

class Persona{
	string nombre, usuario, contra, id, fecha_nacimiento;
	int edad;
public: 
	Persona(string, string, string, string, string, int);
	Persona(const Persona&);
	~Persona();
	void setNombre(string nombre);
	string getNombre()const;
	void setUsuario(string usuario);
	string getUsuario()const;
	void setContra(string contra);
	string getCotra()const;
	void setId(string id);
	string getId()const;
	void setFecha_nacimiento(string fecha_nacimiento);
	string getFecha_nacimienyo()const;
	void setEdad(int edad);
	int getEdad()const;
	string toString()const;
};

#endif
