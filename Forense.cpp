#include "Persona.hpp"
#include "Forense.hpp"

#include <string>
#include <<sstream>

Forense::Forense(string f_ingreso, string horario):Persona(nombre, usuario, contraseña, edad, id, fecha_nacimiento){
	this->f_ingreso = f_ingreso;
	this->horario = horario;

}

Forense::Forense(const Forense&):Persona(p){}

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
	ss << " Forense: Fecha de Ingreso: " << f_ingreso << " Horario de Trabaho: " << horario << Persona::toString();

	return ss.str();
}
