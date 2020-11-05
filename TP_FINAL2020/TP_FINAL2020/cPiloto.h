#pragma once
#include "cPersona.h"
#include "cAzafata.h" //VER SI VA
using namespace std;


class cPiloto : public cPersona
{

public:
	cPiloto();

	void Pilotear();
	void Anunciar();
	void Pedir_Comida(cAzafata *a);
	void Anuncio_Azafata(cAzafata *a);

	~cPiloto();
};

