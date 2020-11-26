#include "cPrimera.h"



cPrimera::cPrimera(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPasajero(nombre, dni, codigodelpasaje)
{
}

void cPrimera::Masajes()
{
	Mensaje.AgregarItem(new Log("Pasajero primera clase haciendose masajes"));

	cout << "" << this->Nombre << " se esta haciendo masajes." << endl;
}

void cPrimera::Tomar_Alcohol()
{
	Mensaje.AgregarItem(new Log("Primera clase bebiendo alcohol"));

	cout << "" << this->Nombre << " esta bebiendo alcohol." << endl;
}



cPrimera::~cPrimera()
{
}
