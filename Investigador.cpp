#include "Persona.hpp"
#include "Investigador.hpp"

#include <string>
#include <sstream>

Investigador::Investigador(int atendidos, int cerrados, int sin_resolver):Persona(nombre, usuario, contraseña, edad, id, fecha_nacimiento){
	this->atendidos = atendidos;
	this->cerrados = cerrados;
	this->sin_resolver = sin_resolver;
}

Investigador::Invesigador(const Investigador& s):Persona(r){

}

Investigador::~Investigador(){}

void Investigador::setAtendidos(int atendidos){
	this->atendidos = atendidos;
}

int Investigador::getAtendidos(){
	return this->atendidos;
}

void Investigador::setCerrados(){
	this->cerrados = cerrados;
}

int Investigador::getCerrados(){
	return this->cerrados;
}

void Investigador::setSin_resolver(){
	this->sin_resolver = sin_resolver;
}

int Investigador::getSin_resolver(){
	return this->sin_resolver;
}

string toString() const{
	stringstream ss;
	ss << " Investigador: Numeros de Casos Atendidos: " << atendidos << " Numero de Casos Cerrados: " << cerrados << " Numero de Casos Sin Resolver: " << sin_resolver << Persona::toString();

	return ss.str();
}
