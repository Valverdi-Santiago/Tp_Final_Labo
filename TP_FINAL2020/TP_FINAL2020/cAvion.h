#pragma once
#include <string>
#include <iostream>
#include "cCodigoPasaje.h"
#include "cPersona.h"
#include "cLista.h"
#include "cComisario.h"
#define NMAX 10

using namespace std;

//HACER LISTA DE CODIGOS RANDON

class cAvion
{
private:
	cLista<cCodigoPasaje>*ListaCodigosPasajes = new cLista<cCodigoPasaje>(NMAX);
	cLista<cPersona>*ListaPersonas = new cLista<cPersona>(NMAX);

public:
	cAvion();

	void Listar_Eventos();
	void Registro_Tripulantes(cPersona *p);
	void AsignarAciento_Comisario(cComisario *c);
	void Verificar_Codigo(cCodigoPasaje *c);

	unsigned int Get_CantidadPersonasAbordo();


	~cAvion();
};
