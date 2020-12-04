#pragma once
#include <iostream>
#include "cPersona.h"
#include "cAzafata.h"
#include "cAvion.h"
using namespace std;

class cPasajero : public cPersona 
{
	bool Estado;
public:
	cPasajero(string nombre, const string dni, cCodigoPasaje* codigodelpasaje);
	void Set_Estado(bool Estado);


	void Perdir_Alimento(cPersona* a);
	void Banio();
	void Dormir();
	void Llamar_Azafata(cPersona* a);
	void Volver_Asiento();
	
	~cPasajero();
};
