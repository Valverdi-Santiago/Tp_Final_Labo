#include "cPiloto.h"



cPiloto::cPiloto(string nombre, const string dni, cCodigoPasaje *codigodelpasaje) : cPersona(nombre, dni, codigodelpasaje)
{
}

void cPiloto::Pilotear()
{
	cout << "El piloto " << this->Nombre << " esta piloteando el avion." << endl;
}

void cPiloto::Anunciar()
{
	cout << "Buenas pasajeros soy el piloto y les deseo un buen vuelo." << endl;
}

void cPiloto::Pedir_Comida(cAzafata * a)
{
	if (a->Atender_Piloto(this) == true)
		a->Set_Libre(true);
}

void cPiloto::Anuncio_Azafata(cAzafata * a)
{
	a->Mensaje_Del_Piloto("Tomen asiento por favor.");
}


cPiloto::~cPiloto()
{
}
