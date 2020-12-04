#pragma once
#include "cPersona.h"
#include "cAvion.h"
#include <iostream>

using namespace std;


class cAzafata : public cPersona
{
private:
	bool Ocupada_Libre; // true= libre, false= ocupada

public:
	cAzafata(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);
	void Set_Libre(bool libre);

	void Entregar_Alimento(int menu, cPersona* persona);
	bool Atender_Pasajero(cPersona* persona);
	bool Atender_Piloto(cPersona* persona);
	void Mensaje_Del_Piloto(string Mensaje);
	void Auxiliar_Pasajero(cPersona* persona);

	~cAzafata();
};

