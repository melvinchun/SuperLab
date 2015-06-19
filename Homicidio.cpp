#include <string>
#include <vector>
#include "Casos.hpp"
#include "Homicidio.hpp"

using std::string;

Homicidio::Homicidio():Casos(){
	this->nombre="";
	this->nombre_sospechoso="";
	this->nombre_victima="";
	this->nombre_culpable="";
}

Homicidio::Homicidio(string nombre, string nombre_sospechoso, string nombre_victima, int num_caso, string hora, string fecha):Casos(num_caso, hora, fecha){
	this->nombre=nombre;
	this->nombre_sospechoso=nombre_sospechoso;
	this->nombre_victima=nombre_victima;
	this->nombre_culpable="";
}

Homicidio::Homicidio(const Homicidio& other):Casos(other){
	nombre=other.nombre;
	nombre_sospechoso=other.nombre_sospechoso;
	nombre_victima=other.nombre_victima;
	nombre_culpable=other.nombre_culpable;
	for (int i = 0; i < other.sospechosos.size(); ++i){
		sospechosos.push_back(other.sospechosos[i]);
	}
}

Homicidio::~Homicidio(){

}

const string Homicidio::getNombre()const{
	return nombre;
}

const string Homicidio::getNombreSospechoso()const{
	return nombre_sospechoso;
}

string Homicidio::getNombreVictima()const{
	return nombre_victima;
}

const string Homicidio::getNombreCulpable()const{
	return nombre_culpable;
}

void Homicidio::setNombre(const string nombre){
	this->nombre=nombre;
}

void Homicidio::setNombreSospechoso(const string nombre_sospechoso){
	if(this->getEstado()){
		this->nombre_sospechoso=nombre_sospechoso;
	}else{
		this->nombre_sospechoso="";
	}
}

void Homicidio::setNombreVictima(const string nombre_victima){
	this->nombre_victima= nombre_victima;
}

void Homicidio::setNombreCulpable(const string nombre_culpable){
	this->nombre_culpable=nombre_culpable;
}

void Homicidio::addSospechoso(const string sospechosor){
	sospechosos.push_back(sospechosor);
}

void Homicidio::eliminarSospechoso(int n){
	sospechosos.erase(sospechosos.begin()+n);
}
