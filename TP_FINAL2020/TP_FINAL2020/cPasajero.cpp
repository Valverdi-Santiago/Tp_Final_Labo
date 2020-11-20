#include "cPasajero.h"



cPasajero::cPasajero(string nombre, const string dni, cCodigoPasaje *codigodelpasaje) :cPersona(nombre, dni, codigodelpasaje)
{
}


void cPasajero::Set_Estado(bool Estado)
{
	this->Estado = Estado;
}

void cPasajero::Banio()
{
	cout << "" << this->Nombre << " va al banio." << endl;
	this->Volver_Asiento();
}

void cPasajero::Dormir()
{
	cout << "" << this->Nombre << " duerme." << endl;
}


void cPasajero::Volver_Asiento()
{
	cout << "" << this->Nombre << " vuelve al asiento." << endl;
}

cPasajero::~cPasajero()
{
}
