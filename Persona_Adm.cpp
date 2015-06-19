#include "Persona.hpp"
#include "Persona_Adm.hpp"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Persona_Adm::Persona_Adm(string clave, string puesto, string nombre, string usuario, string contraseña, int edad, string id, string fecha_nacimiento):Persona (nombre, usuario, contraseña, id, fecha_nacimiento, edad){
	this->clave = clave;
	this->puesto = puesto;
}

Persona_Adm::Persona_Adm(const Persona_Adm& other):Persona(other){
	clave = other.clave;
	puesto = other.puesto;
}

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

