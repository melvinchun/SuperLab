#pragma once
#include <string>
#include "Persona.hpp"

using std::string;

class Investigador:public Persona{
	int atendidos, cerrados, sin_resolver;
public:
	Investigador(int, int, int, string, string, string, string, string, int);
	Investigador(const Investigador&);
	~Investigador();
	void setAtendidos(int atendidos);
	int getAtendidos()const;
	void setCerrados(int cerrados);
	int getCerrados() const;
	void setSin_resolver(int sin_resolver);
	int getSin_resolver() const;
};
