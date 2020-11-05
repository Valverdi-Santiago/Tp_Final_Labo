#include "cPersona.h"



cPersona::cPersona():DNI(" ")
{
	Nombre = " ";
	CodigoDePasaje = NULL;
}

cPersona::cPersona(cPersona & p):DNI(p.DNI)//VER SI ESTA BIEN
{
	Nombre = p.Nombre;
	CodigoDePasaje = p.CodigoDePasaje;
}

const string cPersona::Get_DNI()
{
	return DNI;
}


cPersona::~cPersona()
{
}
