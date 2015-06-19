#pragma once
#include <string>
#include "Persona.hpp"

using std::string;

class Investigador::public Persona{
	int atendidos, cerrados, sin_resorlver;
public:
	Investigadores(int atendidos, int cerrados, int sin_resolver);
	Investigadores(const Investigadores&);
	~Investigadores();
	string toString()const;
	void setAtendidos(int atendidos);
	int getAtendidos();
	void setCerrados(int cerrados);
	int getCerrados()const;
	void setSin_resolver(int sin_resolver);
	int getSin_resolver()const;
};
