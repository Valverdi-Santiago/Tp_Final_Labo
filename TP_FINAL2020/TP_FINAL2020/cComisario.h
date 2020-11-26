#pragma once
#include <iostream>
#include "cPersona.h"
#include "cPasajero.h" 
using namespace std;


class cComisario : public cPersona
{

public:
	cComisario(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);

	void Reduce(cPasajero *p);
	void Encerrar(cPasajero *p);

	~cComisario();
};

