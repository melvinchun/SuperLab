#include "Persona.hpp"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Persona::Persona(string nombre, string usuario, string contra, string id, string fecha_nacimiento, int edad){
	this->nombre = nombre;
	this->usuario = usuario;
	this->contra = contra;
	this->id = id;
	this->fecha_nacimiento = fecha_nacimiento;
}

Persona::Persona(const Persona& other){
	nombre = other.nombre;
	usuario = other.usuario;
	contra = other.contra;
	id = other.id;
	fecha_nacimiento = other.fecha_nacimiento;
}

Persona::~Persona(){}

void Persona::setNombre(string nombre){
	this->nombre = nombre;
}

string Persona::getNombre()const{
	return this->nombre;
}

void Persona::setUsuario(string usuario){
	this->nombre = nombre;
}

string Persona::getUsuario()const{
	return this->usuario;
}

void Persona::setContra(string contra){
	this->contra = contra;
}

string Persona::getContra()const{
	return this->contra;
}

void Persona::setId(string id){
	this->id = id;
}

string Persona::getId()const{
	return this->id;
}

void Persona::setFecha_nacimiento(string fecha_nacimiento){
	this->fecha_nacimiento = fecha_nacimiento;
}

string Persona::getFecha_nacimiento()const{
	return this->fecha_nacimiento;
}

void Persona::setEdad(int edad){
	this->edad = edad;
}

int Persona::getEdad()const{
	return this->edad;
}

