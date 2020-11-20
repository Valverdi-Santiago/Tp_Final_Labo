#include "cPersona.h"



cPersona::cPersona(string nombre, const string dni, cCodigoPasaje *codigodelpasaje) :DNI(dni)
{
	Nombre = nombre;
	CodigoDePasaje = codigodelpasaje;
}

cPersona::cPersona(cPersona & p):DNI(p.DNI)
{
	Nombre = p.Nombre;
	CodigoDePasaje = p.CodigoDePasaje;
}

const string cPersona::Get_DNI()
{
	return DNI;
}

string cPersona::To_String() 
{
	return "Nombre: " + Nombre + "  DNI: " + DNI + "\nCodigo de pasaje: " + this->CodigoDePasaje->To_StringCodigo();
}

cPersona::~cPersona()
{
}
