#include <string>
#include <vector>
#include "Casos.hpp"

using std::string;

Casos::Casos(int num_caso, string hora, string fecha){
	this->num_caso=num_caso;
	this->hora=hora;
	this->fecha=fecha;
	this->estado=false;
}

Casos::Casos(const Casos& other){
	num_caso= other.num_caso;
	hora= other.hora;
	fecha= other.fecha;
	estado= other.estado;
	for (int i = 0; i < other.investigadores.size(); ++i){
		invesigadores.push_back(other.investigadores[i]);
	}
	for (int i = 0; i < other.evidencias.size(); ++i){
		evidencias.push_back(other.evidencias[i]);
	}

}

Casos::~Casos(){
	for (int i = 0; i < investigadores.size(); ++i){
		delete[] investigadores[i];
	}

	for (int i = 0; i < evidencias.size(); ++i){
		delete[] evidencias[i];
	}

}

const int Casos::getNum_caso()const{
	return num_caso;
}

const vector<Investigadores*> Casos::getInvestigadores()const{
	return investigadores;
}

const vector<Evidencia*> Casos::getEvidencias()const{
	return evidencias;
}

const string Casos::getHora()const{
	return hora;
}

const string Casos::getFecha()const{
	return fecha;
}

const bool Casos::getEstado()const{
	return estado;
}

void Casos::setNum_caso(const int num_caso){
	this->num_caso=num_caso;
}

void Casos::setHora(string hora){
	this->hora=hora;
}

void Casos::setFecha(string fecha){
	this->fecha=fecha;
}

void Casos::setEstado(bool estado){
	this->estado=estado;
}

void Casos::addInvestigador(const Investigador* investigador){
	invesigadores.push_back(investigador);
}

void Casos::addEvidencia(const Evidencia* evidencia){
	evidencias.push_back(evidencia);
}

void Casos::removeInvestigador(int posicion){
	investigadores.erase(investigadores.begin()+posicion);
}

void Casos::removeEvidencia(int posicion){
	evidencias.erase(evidencias.begin()+posicion);
}

virtual string Casos::getNombreVictima()const{
	return "";
}
