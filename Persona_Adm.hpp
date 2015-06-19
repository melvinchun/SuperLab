#pragma once
#include "Persona.hpp"
#include <string>

using std::string;

class Persona_Adm::public Persona{
	string clave, puesto;
public:
	Persona_Adm(string, string,string, string, string, string, string, int);
	Persona_Adm(const Persona_Adm&);
	~Persona_Adm();
	string toString()const;
	void setClave(string clave);
	string getClave();
	void setPuesto(string puesto);
	string getPuesto();
};
