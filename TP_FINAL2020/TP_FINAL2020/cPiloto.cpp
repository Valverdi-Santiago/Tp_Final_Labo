#include "cPiloto.h"



cPiloto::cPiloto(string nombre, const string dni, cCodigoPasaje *codigodelpasaje) : cPersona(nombre, dni, codigodelpasaje)
{
}

void cPiloto::Pilotear()
{	
	cAvion::logger.AgregarItem(new Log("Pilotando avion"));

	cout << "El piloto " << this->Nombre << " esta piloteando el avion." << endl;
}

void cPiloto::Anunciar()
{
	cAvion::logger.AgregarItem(new Log("Piloto anunciando"));

	cout << "Buenas pasajeros soy el piloto y les deseo un buen vuelo." << endl;
}

void cPiloto::Pedir_Comida(cAzafata * a)
{
	if (a->Atender_Piloto(this) == true)
	{
		a->Set_Libre(true);
		cAvion::logger.AgregarItem(new Log("Piloto Pide comida"));

	}
}

void cPiloto::Anuncio_Azafata(cAzafata * a)
{
	cAvion::logger.AgregarItem(new Log("Piloto pide que la azafata anuncie"));

	a->Mensaje_Del_Piloto("Tomen asiento por favor.");
}


cPiloto::~cPiloto()
{
}
