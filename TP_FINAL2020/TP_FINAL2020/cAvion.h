#pragma once
#include <string>
#include <iostream>
#include "cCodigoPasaje.h"
#include "cPersona.h"
#include "cLista.h"
#include "cComisario.h"
#define NMAX 10

using namespace std;


class cAvion
{
private:
	cLista<cCodigoPasaje>*ListaCodigosPasajes = new cLista<cCodigoPasaje>(NMAX);
	cLista<cPersona>*ListaPersonas = new cLista<cPersona>(NMAX);

public:
	cAvion();

	
	void Registro_Tripulantes(cPersona *c);
	void AsignarAciento_Comisario(cComisario *c);
	void Verificar_Codigo(cPersona *c);

	unsigned int Get_CantidadPersonasAbordo();


	~cAvion();
};
