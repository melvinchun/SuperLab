#pragma once
#include <string>
#include <vector>
#include "Caso.hpp"

using std::string;

class Homicido : public Caso{
	vector<string> sospechosos;
	string nombre;
	string nombre_sospechoso;
	string nombre_victima;
	string nombre_culpable;

public:
	Homicido(string nombre, string nombre_sospechoso, string nombre_victima, int num_caso, string hora, string fecha);
	Homicidio(const Homicidio&);
	~Homicido();
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