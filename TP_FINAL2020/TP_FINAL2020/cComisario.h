#pragma once
#include <iostream>
#include "cPersona.h"
#include "cPasajero.h" 
using namespace std;

class cPasajero; //LO AGREGUE PORQUE NO LA DEFINIA

class cComisario : public cPersona
{

public:
	cComisario(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);

	void Reduce(cPasajero *p);
	void Encerrar(cPasajero *p);

	void Set_Asiento(char asiento);

	~cComisario();
};

