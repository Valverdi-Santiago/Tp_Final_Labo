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
	
	int menu;
	
	menu=rand() % 10;
	
	if(a->Atender_Pasajero(this)==true)
		a->Entregar_Alimento( menu, this);
	cAvion::logger.AgregarItem(new Log("Pasajero pidiendo alimento"));

}

void cPasajero::Banio()
{
	cout << "" << this->Nombre << " va al banio." << endl;
	this->Volver_Asiento();
	cAvion::logger.AgregarItem(new Log("Pasajero va al banio"));

}

void cPasajero::Dormir()
{
	cAvion::logger.AgregarItem(new Log("Pasajero duerme"));

	cout << "" << this->Nombre << " duerme." << endl;
}

void cPasajero::Llamar_Azafata(cAzafata * a)
{
	a->Atender_Pasajero(this);
}


void cPasajero::Volver_Asiento()
{
	cout << "" << this->Nombre << " vuelve al asiento." << endl;
}

cPasajero::~cPasajero()
{
}
