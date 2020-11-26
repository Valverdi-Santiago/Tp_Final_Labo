#include "cComisario.h"



cComisario::cComisario(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPersona(nombre, dni, codigodelpasaje)
{
}

void cComisario::Reduce(cPasajero* p)
{
	Mensaje.AgregarItem(new Log("Reduciendo Pasajero"));

	cout << "Reduciendo a pasajero "<< this->Nombre << endl;
	p->Set_Estado(true);
	Encerrar(p);
}

void cComisario::Encerrar(cPasajero* p)
{ 
	Mensaje.AgregarItem(new Log("Encerrando Pasajero"));

	cout << "Encerrando Pasajero" << endl;
}


cComisario::~cComisario()
{
}
