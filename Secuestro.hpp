#pragma once
#include <string>
#include "Casos.hpp"

using std::string;

class Secuestro public Casos{
	string lugar;
	string motivo;
	string nombre_victima;
	bool rescate;
	double cantidad;
	bool estado_victima;
public:
	Secuestro();
	Secuestro(string lugar, string motivo, string nombre_victima, bool rescate, double cantidad, bool estado_victima, int num_caso, string hora, string fecha);
	Secuestro(const Secuestro&);
	~Secuestro();
	const string getLugar()const;
	const string getMotivo()const;
	virtual string getNombreVictima()const;
	const bool getRescate()const;
	const double getCantidad()const;
	const bool getEstadoVictima()const;
	void setLugar(const string lugar);
	void setMotivo(const string motivo);
	void setNombreVictima(string Victima);
	void setRescate(bool rescate);
	void setCantidad(double cantidad);
	void setEstadoVictima(bool estado);
};