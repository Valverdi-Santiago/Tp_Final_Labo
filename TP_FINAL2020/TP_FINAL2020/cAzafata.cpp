#include "cAzafata.h"



cAzafata::cAzafata(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPersona(nombre, dni, codigodelpasaje)
{
	Ocupada_Libre = true;
}

void cAzafata::Set_Libre(bool libre)
{
	Ocupada_Libre = libre;
}

void cAzafata::Entregar_Alimento(int menu,cPersona * persona)
{
	cAvion::logger.AgregarItem(new Log("Entregando alimento"));

	cout << "Entregando menu numero: "<< menu << endl;
	cout << "A la persona con dni numero:" << persona->getclave() << endl;
	Ocupada_Libre = true;
}

bool cAzafata::Atender_Pasajero(cPersona * persona)
{
	if (Ocupada_Libre == true)
	{
		cAvion::logger.AgregarItem(new Log("Atendiendo Pasajero"));

		cout << "Atendiendo al pasajero: " << persona->getclave() << endl;
		Ocupada_Libre = false;
		return true;
	}
	return false;
}

bool cAzafata::Atender_Piloto(cPersona* persona)
{
	if (Ocupada_Libre == true)
	{
		cAvion::logger.AgregarItem(new Log("Atendiendo Piloto"));
		
		cout << "Atendiendo al piloto: " << persona->getclave() << endl;
		Ocupada_Libre = false;
		return true;
	}
	return false;
}

void cAzafata::Auxiliar_Pasajero(cPersona* persona)
{
	if (Ocupada_Libre == true)
	{
		cout << "Auxiliando al pasajero con el dni:" << persona->getclave() << endl;
		cAvion::logger.AgregarItem(new Log("Auxiliando Pasajero"));
	}
}
void cAzafata::Mensaje_Del_Piloto(string Mensaje)
{
	if (Ocupada_Libre == true)
	{	cout << Mensaje << endl;
	cAvion::logger.AgregarItem(new Log("Pasando Mensaje"));
	}
}

cAzafata::~cAzafata()
{
}
