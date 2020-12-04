#pragma once
#include "cPasajero.h"
#include "cAvion.h"
using namespace std;


class cEjecutiva : public cPasajero
{

public:
	cEjecutiva(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);
	
	void Trabajar();

	~cEjecutiva();
};

