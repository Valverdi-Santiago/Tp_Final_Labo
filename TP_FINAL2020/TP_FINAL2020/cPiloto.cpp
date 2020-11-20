#include "cPiloto.h"



cPiloto::cPiloto(string nombre, const string dni, cCodigoPasaje *codigodelpasaje) : cPersona(nombre, dni, codigodelpasaje)
{
}

void cPiloto::Pilotear()
{
	cout << "El piloto " << this->Nombre << " esta piloteando el avion." << endl;
}

void cPiloto::Anunciar()
{
	cout << "Buenas pasajeros soy el piloto y les deseo un buen vuelo." << endl;
}


cPiloto::~cPiloto()
{
}
