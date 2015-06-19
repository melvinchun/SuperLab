#pragma once
#include "Persona.hpp"
#include <string>

using std::string;

class Persona_Adm:public Persona{
	string clave, puesto;
public:
	Persona_Adm(string clave, string puesto, string nombre, string usuario, string contraseña, int edad, string id, string fecha_nacimiento);
	Persona_Adm(const Persona_Adm&);
	~Persona_Adm();
	void setClave(string clave);
	string getClave();
	void setPuesto(string puesto);
	string getPuesto();
};
