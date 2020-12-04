#pragma once 
#include <iostream>
#include "cCodigoPasaje.h"
using namespace std;

class cPersona
{
protected:
	string Nombre;
	cCodigoPasaje *CodigoDePasaje;
	bool Estado; // true= detenido, false= libre
	const string DNI;

public:
	
	cPersona();
	cPersona(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);
	cPersona(cPersona &p);

	const string getclave();
	string To_String();
	void Imprimir();

	virtual ~cPersona();
};

