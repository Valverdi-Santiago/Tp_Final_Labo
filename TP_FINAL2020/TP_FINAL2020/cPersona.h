#pragma once 
#include "cAvion.h"
#include "Logger.h"
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

	const string Get_DNI();
	string To_String();
	void Imprimir();

	~cPersona();
};

