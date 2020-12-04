#include "cPasajero.h"



cPasajero::cPasajero(string nombre, const string dni, cCodigoPasaje *codigodelpasaje) :cPersona(nombre, dni, codigodelpasaje)
{
	Estado = false;
}


void cPasajero::Set_Estado(bool Estado)
{
	this->Estado = Estado;
}

void cPasajero::Perdir_Alimento(cPersona* a)
{ 
	cAzafata* azafata = dynamic_cast<cAzafata*>(a);
	int menu;
	srand(time_t(NULL));
	menu=rand() % 10;
	if (azafata != NULL) //PARA VER SI ES AZAFATA O NO
	{
		if (azafata->Atender_Pasajero(this) == true)
			azafata->Entregar_Alimento(menu, this);
		cAvion::logger.AgregarItem(new Log("Pasajero pidiendo alimento"));
	}
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

void cPasajero::Llamar_Azafata(cPersona * a)
{
	cAzafata* azafata = dynamic_cast<cAzafata*>(a);
	if (azafata != NULL)
	{
		bool aux=azafata->Atender_Pasajero(this);
		if (aux == false)
			cAvion::logger.AgregarItem(new Log("LA azafata esta ocupada")); //verrrrrrrrrrrrr
	}
}


void cPasajero::Volver_Asiento()
{
	cout << "" << this->Nombre << " vuelve al asiento." << endl;
	cAvion::logger.AgregarItem(new Log("Pasajero volvio al asiento"));
}

cPasajero::~cPasajero()
{
}
