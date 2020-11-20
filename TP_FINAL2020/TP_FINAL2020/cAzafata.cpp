#include "cAzafata.h"



cAzafata::cAzafata(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPersona(nombre, dni, codigodelpasaje)
{
	Ocupada_Libre = false;
}


cAzafata::~cAzafata()
{
}
