#include "Persona.hpp"
#include "Persona_Adm.hpp"

#include <string>
#include <sstream>

Persona_Adm::Persona_Adm(string clave, string puesto):Persona(nombre, usuario, contraseña, edad, id, fecha_nacimiento){
	this->clave = clave;
	this->puesto = puesto;
}

Persona_Adm::Persona_Adm(const Persona_Adm&):Persona(r){}

Persona_Adm::~Persona_Adm(){}

void Persona_Adm::setClave(string clave){
	this->clave = clave;
}

string Persona_Adm::getClave(){
	return this->clave;
}

void Persona_Adm::setPuesto(string puesto){
	this->puesto = puesto;
}

string Persona_Adm::getPuesto(){
	return this->puesto;
}

string toString()const{
	stringstream ss;
	ss << " Persona Administrativa: Puesto: " << puesto << Persona::toString();
	return ss.str();
}
