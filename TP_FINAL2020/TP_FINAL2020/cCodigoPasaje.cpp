#include "cCodigoPasaje.h"



cCodigoPasaje::cCodigoPasaje() :Dni(" ")
{
	Tipo = " ";
	Fila = -1;
	Asiento = ' ';
}

cCodigoPasaje::cCodigoPasaje(string tipo, const string dni, int fila, char asiento) : Dni(dni)
{
	Tipo = tipo;
	Fila = fila;
	Asiento = asiento;
}


string cCodigoPasaje::To_StringCodigo()
{
	return Tipo + "-" + Dni + "-" + to_string(Fila) + "-" + Asiento;
}

void cCodigoPasaje::Set_Asiento(char aciento)
{
	Asiento = aciento;
}

const string cCodigoPasaje::Get_Dni()
{
	return Dni;
}

cCodigoPasaje::~cCodigoPasaje()
{
}