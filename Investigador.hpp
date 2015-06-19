#pragma once
#include <string>
#include "Persona.hpp"

using std::string;

class Investigador:public Persona{
	int atendidos, cerrados, sin_resorlver;
public:
	Investigador(int, int, int, string, string, string, string, string, int);
	Investigador(const Investigadore&);
	~Investigador();
	string toString()const;
	void setAtendidos(int atendidos);
	int getAtendidos();
	void setCerrados(int cerrados);
	int getCerrados()const;
	void setSin_resolver(int sin_resolver);
	int getSin_resolver()const;
};
