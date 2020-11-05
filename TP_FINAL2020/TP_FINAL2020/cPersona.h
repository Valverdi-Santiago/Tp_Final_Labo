#pragma once
#include <string>  //VER SI LO DEJO
#include "cCodigoPasaje.h"
using namespace std;

class cPersona
{
protected:
	string Nombre;
	const string DNI;
	cCodigoPasaje *CodigoDePasaje;

public:
	cPersona();
	cPersona(cPersona &p);

	const string Get_DNI();
	string To_String();

	~cPersona();
};

