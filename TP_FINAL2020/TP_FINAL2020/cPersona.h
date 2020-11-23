#pragma once
//#include <string>  
#include "cCodigoPasaje.h"
using namespace std;

class cPersona
{
protected:
	string Nombre;
	cCodigoPasaje *CodigoDePasaje;
	bool Estado;


public:
	const string DNI;


	cPersona();

	cPersona(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);

	cPersona(cPersona &p);
	const string Get_DNI();
	string To_String();

	~cPersona();
};

