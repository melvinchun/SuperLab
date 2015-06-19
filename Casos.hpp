#pragma once
#include <string>
#include <vector>
#include "Investigador.hpp"
#include "Evidencia.hpp"

using std::string;

class Casos{
	int num_caso;
	vector<Investigador*> investigadores;
	vector<Evidencia*> evidencias;
	string hora;
	string fecha;
	bool estado;

public:
	Casos();
	Casos(int num_caso, string hora, string fecha);
	Casos(const Casos&);
	~Casos();
	const int getNum_caso()const;
	const vector<Investigadores*> getInvestigadores()const;
	const vector<Evidencia*> getEvidencias()const;
	const string getHora()const;
	const string getFecha()const;
	const bool getEstado()const;
	void setNum_caso(const int num_caso);
	void setHora(string hora);
	void setFecha(string fecha);
	void setEstado(bool estado);
	void addInvestigador(const Investigador* investigador);
	void addEvidencia(const Evidencia* evidencia);
	void removeInvestigador(int posicion);
	void removeEvidencia(int posicion);
	virtual string getNombreVictima()const;
};