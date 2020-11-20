#include "cEjecutiva.h"



cEjecutiva::cEjecutiva(string nombre, const string dni, cCodigoPasaje *codigodelpasaje):cPasajero(nombre, dni, codigodelpasaje)
{
}

void cEjecutiva::Trabajar()
{
	cout << "" << this->Nombre << " esta trabajando." << endl;
}


cEjecutiva::~cEjecutiva()
{
}
