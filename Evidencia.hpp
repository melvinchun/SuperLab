#pragma once
#include <string>

using std::string;

class Evidencia{
	string nombre;
	string tipo;
	string lugar;
	bool huella;
	bool procesada;
public:
	Evidencia(string nombre, string tipo, string lugar, bool huella, bool procesada);
	Evidencia(const Evidencia&);
	const string getNombre()const;
	const string getTipo()const ;
	const string getLugar()const ;
	const bool getHuella()const ;
	const bool getProcesada()const ;
	void setNombre(const string nombre);
	void setTipo(const string tipo);
	void setLugar(const string lugar);
	void setHuella(const bool huella);
	void setProcesada(const bool procesada);
};