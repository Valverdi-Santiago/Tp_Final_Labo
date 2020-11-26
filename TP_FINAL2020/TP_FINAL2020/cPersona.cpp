#include "cPersona.h"



cPersona::cPersona(): DNI(" ")
{
	Nombre = " ";
	CodigoDePasaje = NULL;
	Estado = false;
}

cPersona::cPersona(string nombre, const string dni, cCodigoPasaje *codigodelpasaje) :DNI(dni)
{
	Nombre = nombre;
	if (codigodelpasaje->Get_Dni() == dni)//PARA ESTAR SEGUROS DE QUE ESE PASAJE LE CORRESPONDE A ESA PERSONA
		CodigoDePasaje = codigodelpasaje;
	else
		CodigoDePasaje = NULL;
}

cPersona::cPersona(cPersona & p) :DNI(p.DNI)
{
	Nombre = p.Nombre;
	Estado = p.Estado;
	if (p.CodigoDePasaje->Get_Dni() == DNI)
		CodigoDePasaje = p.CodigoDePasaje;
	else
		CodigoDePasaje = NULL;
}



const string cPersona::Get_DNI()
{
	return DNI;
}

string cPersona::To_String()
{
	if (this->CodigoDePasaje != NULL)
		return "Nombre: " + Nombre + "  DNI: " + DNI + "\nCodigo de pasaje: " + this->CodigoDePasaje->To_StringCodigo();
	else
		return "Nombre: " + Nombre + "  DNI: " + DNI + "\nCodigo de pasaje: No tiene.";
}


cPersona::~cPersona()
{
}
