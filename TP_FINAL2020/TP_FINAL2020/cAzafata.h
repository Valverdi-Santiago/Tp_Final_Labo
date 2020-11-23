#pragma once
#include "cPersona.h"
#include <iostream>

using namespace std;


class cAzafata : public cPersona
{
private:
	bool Ocupada_Libre; //VER SI LO DEJAMOS

public:
	cAzafata(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);

	void Entregar_Alimento(int menu, cPersona* persona);
	void Atender_Pasajero(cPersona* persona);
	void Atender_Piloto(cPersona* persona);
	void Mensaje_Del_Piloto(string Mensaje);
	void Auxiliar_Pasajero(cPersona* persona);

	~cAzafata();
};

