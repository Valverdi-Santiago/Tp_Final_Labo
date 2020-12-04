#include "cCopiloto.h"



cCopiloto::cCopiloto(string nombre, const string dni, cCodigoPasaje *codigodelpasaje): cPiloto(nombre, dni, codigodelpasaje)
{
}

void cCopiloto::Comunicar_Torre() 
{	
	cAvion::logger.AgregarItem(new Log("Llamando torre"));
	cout << "El copiloto " << this->Nombre << " se esta comunicando con la Torre de control." << endl;
}


cCopiloto::~cCopiloto()
{
}
