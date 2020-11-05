#include "cCodigoPasaje.h"



cCodigoPasaje::cCodigoPasaje():Dni(" ")
{
	Tipo = " ";
	Fila = -1;
	Asiento = ' ';
}

cCodigoPasaje::cCodigoPasaje(string tipo, const string dni, int fila, char asiento): Dni(dni)
{
	Tipo = tipo;
	Fila = fila;
	Asiento = asiento;
}


void cCodigoPasaje::Set_Asiento(char aciento)
{
	Asiento = aciento;
}

cCodigoPasaje::~cCodigoPasaje()
{
}
