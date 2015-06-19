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
	Persona(const Persona& other);
	~Persona();
	void setNombre(string nombre);
	string getNombre()const;
	void setUsuario(string usuario);
	string getUsuario()const;
	void setContra(string contra);
	string getContra()const;
	void setId(string id);
	string getId()const;
	void setFecha_nacimiento(string fecha_nacimiento);
	string getFecha_nacimiento()const;
	void setEdad(int edad);
	int getEdad()const;
};

#endif
