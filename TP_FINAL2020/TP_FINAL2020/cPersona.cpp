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
	if (codigodelpasaje->getclave() == dni)//PARA ESTAR SEGUROS DE QUE ESE PASAJE LE CORRESPONDE A ESA PERSONA
		CodigoDePasaje = codigodelpasaje;
	else
		CodigoDePasaje = NULL;
}

cPersona::cPersona(cPersona & p) :DNI(p.DNI)
{
	Nombre = p.Nombre;
	Estado = p.Estado;
	if (p.CodigoDePasaje->getclave() == DNI)
		CodigoDePasaje = p.CodigoDePasaje;
	else
		CodigoDePasaje = NULL;
}

const string cPersona::getclave()
{
	return DNI;
}

string cPersona::To_String()
{
	if (this->CodigoDePasaje != NULL)
		return "Nombre: " + Nombre + "  -DNI: " + DNI + "  -Codigo de pasaje: " + this->CodigoDePasaje->To_StringCodigo();
	else
		return "Nombre: " + Nombre + "  -DNI: " + DNI + "  -Codigo de pasaje: No tiene.";
}

void cPersona::Imprimir() 
{
	cout << this->To_String() << endl << endl;
}

cPersona::~cPersona()
{
}

