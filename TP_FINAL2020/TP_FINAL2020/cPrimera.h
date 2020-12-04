#pragma once
#include "cPasajero.h"
#include "cAvion.h"
using namespace std;

class cPrimera : public cPasajero
{

public:
	cPrimera(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);

	void Masajes();
	void Tomar_Alcohol();

	~cPrimera();
};

