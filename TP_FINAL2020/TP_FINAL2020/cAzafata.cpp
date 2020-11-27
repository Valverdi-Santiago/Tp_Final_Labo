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
	Mensaje.AgregarItem(new Log("Entregando alimento"));
	
	cout << "Entregando menu numero: "<< menu << endl;
	cout << "A la persona con dni numero:" << persona->Get_DNI() << endl;
	Ocupada_Libre = true;
}

bool cAzafata::Atender_Pasajero(cPersona * persona)
{
	if (Ocupada_Libre == true)
	{
		Mensaje.AgregarItem(new Log("Atendiendo Pasajero"));

		cout << "Atendiendo al pasajero: " << persona->Get_DNI() << endl;
		Ocupada_Libre = false;
		return true;
	}
	return false;
}

bool cAzafata::Atender_Piloto(cPersona* persona)
{
	if (Ocupada_Libre == true)
	{
		Mensaje.AgregarItem(new Log("Atendiendo Piloto"));
		
		cout << "Atendiendo al piloto: " << persona->Get_DNI() << endl;
		Ocupada_Libre = false;
		return true;
	}
	return false;
}

void cAzafata::Auxiliar_Pasajero(cPersona* persona)
{
	if (Ocupada_Libre == true)
	{
		cout << "Auxiliando al pasajero con el dni:" << persona->Get_DNI() << endl;
		Mensaje.AgregarItem(new Log("Auxiliando Pasajero"));

	}
}
void cAzafata::Mensaje_Del_Piloto(string Mensaje)
{
	if (Ocupada_Libre == true)
	{	cout << Mensaje << endl;
	this->Mensaje.AgregarItem(new Log("Pasando Mensaje"));

	}
}

cAzafata::~cAzafata()
{
}
