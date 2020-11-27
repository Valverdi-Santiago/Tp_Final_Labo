#include "cAvion.h"



cAvion::cAvion()
{
}



void cAvion::Registro_Tripulantes(cPersona *c)
{
	ListaPersonas->AgregarItem(c);
	
}


void cAvion::Verificar_Codigo(cPersona *c)
{
	for (int i = 0; i < ListaCodigosPasajes->getCA(); i++)
	{
		cCodigoPasaje *aux = ListaCodigosPasajes[i].BuscarItem(c->Get_DNI());
		if (aux != NULL)
			Registro_Tripulantes(c);
	}
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
