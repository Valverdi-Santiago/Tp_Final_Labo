#pragma once
#include <iostream>
#include "cPersona.h"
#include "cAzafata.h"
//class cAzafata;
//#include "cAzafata.h" //VER SI VA
using namespace std;


class cPasajero : public cPersona
{
	bool Estado;
public:
	cPasajero(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);
	void Set_Estado(bool Estado);


	//void Llevados_Avion(); //ver si va aca o en avion
	void Perdir_Alimento(cAzafata *a);
	void Banio();
	void Dormir();
	void Llamar_Azafata(cAzafata *a);
	void Volver_Asiento();

	~cPasajero();
};

