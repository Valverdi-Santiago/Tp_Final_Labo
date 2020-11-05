#include "cAvion.h"



cAvion::cAvion()
{
	Cantidad_Pasajeros = 0;
	Cantidad_Tripulantes = 0;
}

cAvion::cAvion(int cantidad_pasajeros, int cantidad_tripulantes)
{
	Cantidad_Pasajeros = cantidad_pasajeros;
	Cantidad_Tripulantes = cantidad_tripulantes;
}


int cAvion::Get_CantidadPasajeros()
{
	return Cantidad_Pasajeros;
}

cAvion::~cAvion()
{
}
