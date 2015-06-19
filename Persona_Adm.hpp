#pragma once

#include <string>

using namespace std;

#include "Persona.hpp"

class Persona_Adm::public Persona{
	string clave, puesto;
public:
	Persona_Adm(string, string);
	Persona_Adm(const Persona_Adm&);
	~Persona_Adm();
	string toString()const;
	void setClave(string clave);
	string getClave();
	void setPuesto(string puesto);
	string getPuesto();
};
