#pragma once
#include <iostream>
#include "cPersona.h"
#include "cAzafata.h" //VER SI VA
using namespace std;


class cPiloto : public cPersona
{

public:
	cPiloto(string nombre, const string dni, cCodigoPasaje* codigodelpasaje);

	void Pilotear();
	void Anunciar();
	void Pedir_Comida(cAzafata *a);
	void Anuncio_Azafata(cAzafata *a);

	~cPiloto();
};

