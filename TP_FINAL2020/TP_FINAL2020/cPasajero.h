#pragma once
#include "cPersona.h"
#include "cAzafata.h" //VER SI VA
using namespace std;


class cPasajero : public cPersona
{

public:
	cPasajero();

	//VER SI SON TODOS VOID
	void Llevados_Avion();
	void Perdir_Alimento(cAzafata *a);
	void Banio();
	void Dormir();
	void Llamar_Azafata();
	void Volcer_Asiento();

	~cPasajero();
};

