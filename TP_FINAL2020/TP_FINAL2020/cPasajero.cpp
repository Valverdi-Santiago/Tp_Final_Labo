#include "cPasajero.h"



cPasajero::cPasajero(string nombre, const string dni, cCodigoPasaje *codigodelpasaje) :cPersona(nombre, dni, codigodelpasaje)
{
	Estado = false;
}


void cPasajero::Set_Estado(bool Estado)
{
	this->Estado = Estado;
}

void cPasajero::Perdir_Alimento(cAzafata* a)
{ 
	cPersona* aux;

	int menu;
	srand(time_t(NULL));
	menu=rand() % 10;
	
	a->Entregar_Alimento( menu, this);
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
