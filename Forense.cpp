#include "Persona.hpp"
#include "Forense.hpp"
#include <string>
#include <<sstream>
using std::string;
using std::stringstream;

Forense::Forense(string f_ingreso, string horario, string nombre, string usuario, string contraseña, string id, string fecha_nacimiento, int edad):Persona(nombre, usuario, contraseña, edad, id, fecha_nacimiento){
	this->f_ingreso = f_ingreso;
	this->horario = horario;
}

Forense::Forense(const Forense& other):Persona(other){}
	f_ingreso = other.f_ingreso;
	horario = other.horario;
	
Forense::~Forense(){}

void Forense::setF_ingreso(string f_ingreso){
	this->f_ingreso = f_ingreso;
}

string Forense::getF_ingreso(){
	return this->f_ingreso;
}

void Forense::setHorario(string horario){
	this->horario = horario;
}

string Forense::getHorario(){
	return this->horario;
}

string toString()const{
	stringstream ss;
	ss << " Forense: Fecha de Ingreso: " << f_ingreso << " Horario de Trabajo: " << horario << Persona::toString();

	return ss.str();
}
