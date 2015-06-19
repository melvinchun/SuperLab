#include "Persona.hpp"
#include "Forense.hpp"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Forense::Forense(string f_ingreso, string horario, string nombre, string usuario, string contra, string id, string fecha_nacimiento, int edad):Persona (nombre, usuario, contra, id, fecha_nacimiento, edad){
	this->f_ingreso = f_ingreso;
	this->horario = horario;
}

Forense::Forense(const Forense& other):Persona(other){
	this->f_ingreso = other.f_ingreso;
	this->horario = other.horario;
}

	
Forense::~Forense(){

}

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

