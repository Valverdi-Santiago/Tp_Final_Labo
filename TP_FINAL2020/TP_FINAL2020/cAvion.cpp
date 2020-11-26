#include "cAvion.h"



cAvion::cAvion()
{
}


unsigned int cAvion::Get_CantidadPersonasAbordo()
{
	return ListaPersonas->getCA();
}


cAvion::~cAvion()
{
	delete ListaCodigosPasajes;
	delete ListaPersonas;
}
