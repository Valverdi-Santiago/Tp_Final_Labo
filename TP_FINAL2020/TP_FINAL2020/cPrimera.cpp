#include "cPrimera.h"



cPrimera::cPrimera(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPasajero(nombre, dni, codigodelpasaje)
{
}

void cPrimera::Masajes()
{
	cout << "" << this->Nombre << " se esta haciendo masajes." << endl;
}

void cPrimera::Tomar_Alcohol()
{
	cout << "" << this->Nombre << " esta tomando alcohol." << endl;
}
}


cPrimera::~cPrimera()
{
}
