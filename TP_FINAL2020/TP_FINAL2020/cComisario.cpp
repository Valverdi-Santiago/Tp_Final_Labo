#include "cComisario.h"



cComisario::cComisario(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPersona(nombre, dni, codigodelpasaje)
{
}

void cComisario::Reduce(cPasajero* p)
{
	cout << "Reduciendo pasajero" << endl;
	p->Set_Estado(true);
	Encerrar(p);
}

void cComisario::Encerrar(cPasajero* p)
{
	cout << "Encerrando Pasajero" << endl;
}


cComisario::~cComisario()
{
}
