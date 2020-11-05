#pragma once
#include <string>
#include <iostream>
#include "cCodigoPasaje.h"
#include "cPersona.h"
#include "cComisario.h"//VER SI VA
using namespace std;

//AGREGAR LISTA PERSONA Y LISTA CODIGOPASAJE

class cAvion
{
private:
	int Cantidad_Pasajeros;
	int Cantidad_Tripulantes;

public:
	cAvion();
	cAvion(int cantidad_pasajeros, int cantidad_tripulantes);

	void Listar_Eventos();
	void Registro_Tripulantes(cPersona *p);
	void AsignarAciento_Comisario(cComisario *c);
	void Verificar_Codigo(cCodigoPasaje *c);

	int Get_CantidadPasajeros();

	~cAvion();
};

