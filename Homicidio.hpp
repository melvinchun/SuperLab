#pragma once
#include <string>
#include <vector>
#include "Casos.hpp"

using std::string;

class Homicidio:public Casos{
	vector<string> sospechosos;
	string nombre;
	string nombre_sospechoso;
	string nombre_victima;
	string nombre_culpable;

public:
	Homicidio();
	Homicidio(string nombre, string nombre_sospechoso, string nombre_victima, int num_caso, string hora, string fecha);
	Homicidio(const Homicidio&);
	~Homicidio();
	const string getNombre()const;
	const string getNombreSospechoso()const;
	virtual string getNombreVictima()const;
	const string getNombreCulpable()const;
	void setNombre(const string);
	void setNombreSospechoso(const string);
	void setNombreVictima(const string);
	void setNombreCulpable(const string);
	void addSospechoso(const string);
	void eliminarSospechoso(int);
};