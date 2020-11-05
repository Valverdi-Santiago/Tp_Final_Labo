#pragma once
#include "cPersona.h"
using namespace std;


class cAzafata : public cPersona
{
private:
	bool Ocupada_Libre; //VER SI LO DEJAMOS

public:
	cAzafata();

	void Entregar_Alimento();
	void Atender_Pasajero();
	void Atender_Piloto();
	void Auxiliar_Pasajero();

	~cAzafata();
};

