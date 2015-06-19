#include "Persona.hpp"
#include "Investigador.hpp"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Investigador::Investigador(int atendidos, int cerrados, int sin_resolver, string nombre, string usuario, string contraseña,  string id, string fecha_nacimiento, int edad):Persona (nombre, usuario, contraseña, id, fecha_nacimiento, edad){
	this->atendidos = atendidos;
	this->cerrados = cerrados;
	this->sin_resolver = sin_resolver;
}

Investigador::Investigador(const Investigador& other):Persona(other){
	atendidos = other.atendidos;
	cerrados = other.cerrados;
	sin_resolver = other.sin_resolver;
}

Investigador::~Investigador(){}

void Investigador::setAtendidos(int atendidos){
	this->atendidos = atendidos;
}

int Investigador::getAtendidos() const{
	return this->atendidos;
}

void Investigador::setCerrados(int cerrados){
	this->cerrados = cerrados;
}

int Investigador::getCerrados() const{
	return cerrados;
}

void Investigador::setSin_resolver(int sin_resolver){
	this->sin_resolver = sin_resolver;
}

int Investigador::getSin_resolver() const{
	return this->sin_resolver;
}
