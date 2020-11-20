#include "cAzafata.h"



cAzafata::cAzafata(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPersona(nombre, dni, codigodelpasaje)
{
	Ocupada_Libre = false;
}

void cAzafata::Entregar_Alimento()
{
}

void cAzafata::Atender_Pasajero()
{
}

void cAzafata::Atender_Piloto()
{
}

void cAzafata::Auxiliar_Pasajero()
{
}


cAzafata::~cAzafata()
{
}
