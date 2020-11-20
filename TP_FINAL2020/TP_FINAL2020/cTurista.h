#pragma once
#include "cPasajero.h"
using namespace std;


class cTurista : public cPasajero
{

public:
	cTurista(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);
	~cTurista();
};

