#ifndef FORENSE_H
#define FORENSE_H
#include "Persona.hpp"
#include <string>

using std::string;

class Forense::public Persona{
	string f_ingreso, horario;
public:
	Forense(string f_ingreso, string horario, string nombre, string usuario, string contraseña, string id, string fecha_nacimiento, int edad);
	Forense(const Forense&);
	~Forense();
	string toString()const;
	void setF_ingreso(string f_ingreso);
	string getF_ingreso();
	void setHorario(string horario);
	string getHorario();
};
#endif 

