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

string cPersona::To_String() //VER SI EL /N ESTA BIEN
{
	return "Nombre: " + Nombre + "  DNI: " + DNI + "/nCodigo de pasaje: " + this->CodigoDePasaje->To_StringCodigo();
}

cPersona::~cPersona()
{
}
