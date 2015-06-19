#include <string>
#include <vector>
#include "Casos.hpp"
#include "Secuestro.hpp"
using std::string;


Secusestro::Secuestro():Casos(){
	this->lugar="";
	this->motivo="";
	this->nombre_victima= "";
	this->rescate= false;
	this->cantidad= 0;
	this->estado_victima= false;
}

Secuestro::Secuestro(string lugar, string motivo, string nombre_victima, bool rescate, int num_caso, string hora, string fecha):Casos(num_caso, hora, fecha){
	this->lugar=lugar;
	this->motivo=motivo;
	this->nombre_victima= nombre_victima;
	this->rescate= rescate;
	this->cantidad= 0;
	this->estado_victima= false;
}

Secuestro::Secuestro(const Secuestro&):Casos(other){
	lugar=other.lugar;
	motivo=other.motivo;
	nombre_victima= other.nombre_victima;
	rescate= other.rescate;
	cantidad= other.cantidad;
	estado_victima= other.estado_victima;
}

Secuestro::~Secuestro(){

}

const string Secuestro::getLugar()const{
	return lugar;
}

const string Secuestro::getMotivo()const{
	return motivo;
}

virtual string Secuestro::getNombreVictima()const{
	return nombre_victima;
}

const bool Secuestro::getRescate()const{
	return rescate;
}

const double Secuestro::getCantidad()const{
	return cantidad;
}

const bool Secuestro::getEstadoVictima()const{
	return estado_victima;
}

void Secuestro::setLugar(const string lugar){
	this->lugar=lugar;
}

void Secuestro::setMotivo(const string motivo){
	this->motivo=motivo;
}

void Secuestro::setNombreVictima(string nombre_victima){
	this->nombre_victima=nombre_victima
}

void Secuestro::setRescate(bool rescate){
	this->rescate=rescate;
}

void Secuestro::setCantidad(double cantidad){
	if(rescate){
		this->cantidad=cantidad;
	}else{
		this->cantidad=0;
	}
	
}

void Secuestro::setEstadoVictima(bool estado_victima){
	if(this->getEstado()){
		this->estado_victima=estado_victima;
	}else{
		this->estado_victima=false;
	}
}
