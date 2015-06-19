#include "Evidencia.hpp"
#include <string>

using std::string;

Evidencia::Evidencia(){
	this->nombre="";
	this->tipo="";
	this->lugar="";
	this->huella=false;
	this->procesada=false;
}

Evidencia::Evidencia(string nombre, string tipo, string lugar, bool huella, bool procesada){
	this->nombre=nombre;
	this->tipo=tipo;
	this->lugar=lugar;
	this->huella=huella;
	this->procesada=procesada;
}

Evidencia::Evidencia(const Evidencia&){
	nombre=other.nombre;
	tipo=other.tipo;
	lugar=other.lugar;
	huella=other.huella;
	procesada=other.procesada;
}

const string Evidencia::getNombre()const{
	return nombre;
}
const string Evidencia::getTipo()const {
	return tipo;
}
const string Evidencia::getLugar()const {
	return lugar;
}
const bool Evidencia::getHuella()const {
	return huella;
}
const bool Evidencia::getProcesada()const {
	return procesada;
}
void Evidencia::setNombre(const string nombre){
	this->nombre=nombre;
}
void Evidencia::setTipo(const string tipo){
	this->tipo=tipo;
}
void Evidencia::setLugar(const string lugar){
	this->lugar=lugar;
}
void Evidencia::setHuella(const bool huella){
	this->huella=huella;
}
void Evidencia::setProcesada(const bool procesada){
	this->procesada=procesada;
}
