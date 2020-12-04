#pragma once
#include <string>
#include <iostream>
#include "cCodigoPasaje.h"
#include "cPersona.h"
#include "cLista.h"
#include "cComisario.h"
#include "Logger.h"
#define NMAX 10

using namespace std;

class cAvion
{
private:
	cLista<cCodigoPasaje>* ListaCodigosPasajes;

public:
	cLista<cPersona>* ListaPersonas;
	static Logger logger;

	cAvion();

	void Registro_Tripulantes(cPersona *p);
	void AsignarAciento_Comisario(cComisario *Persona);
	void Verificar_Codigo(cPersona *Persona);

	unsigned int Get_CantidadPersonasAbordo();

	~cAvion();
};
