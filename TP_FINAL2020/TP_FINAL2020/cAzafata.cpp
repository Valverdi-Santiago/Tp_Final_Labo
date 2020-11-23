#include "cAzafata.h"



cAzafata::cAzafata(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPersona(nombre, dni, codigodelpasaje)
{
	Ocupada_Libre = false;
}

void cAzafata::Entregar_Alimento(int menu,cPersona * persona)
{
	cout << "Entregando menu numero: "<< menu << endl;
	cout << "A la persona con dni numero:" << persona->DNI << endl;
}

void cAzafata::Atender_Pasajero(cPersona * persona)
{
	cout << "Atendiendo al pasajero: " << persona->DNI << endl;
}

void cAzafata::Atender_Piloto(cPersona* persona)
{
	cout << "Atendiendo al piloto: " << persona->DNI << endl;
}

void cAzafata::Auxiliar_Pasajero(cPersona* persona)
{
	cout << "Auxiliando al pasajero con el dni:" << persona->DNI << endl;
}
void cAzafata::Mensaje_Del_Piloto(string Mensaje)
{
	cout << Mensaje << endl;
}

cAzafata::~cAzafata()
{
}
