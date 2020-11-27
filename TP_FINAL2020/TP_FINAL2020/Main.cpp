#include <string>
#include <iostream>
#include "cAvion.h"
#include "cCodigoPasaje.h"
#include "cPersona.h"
#include "cPiloto.h"
#include "cPrimera.h"


int main()
{
	//Crear un avion
	//Crear una lista de Personas con sus codigos
	//Agregar y verificar las pasajeros y tripulantes al avion, mediante el codigo (la lista de codigos habilitada para viajar la tiene el avion)
	//Hacer un simulador, donde ocurren distintos eventos, los cuales se alamecan en el logger
	//Mostrar en pantalla todos los eventos que pasaron

	cAvion *avion = new cAvion();
	
	cPiloto *piloto = new cPiloto("Juan", "23456456", new cCodigoPasaje("TU", "23456456", 05, 'F'));
	cAzafata *azafata = new cAzafata("Victoria", "45345345", new cCodigoPasaje("AZ", "45345345", 03, 'A'));
	cPrimera *primeraclase = new cPrimera("Maria", "43234789", new cCodigoPasaje("PC", "43234789", 01, 'B'));
	cPe *turista = new cPersona("Jorge", "13345345", new cCodigoPasaje("BS", "13345345", 12, 'C'));

	avion->Verificar_Codigo(piloto);
	avion->Verificar_Codigo(azafata);
	avion->Verificar_Codigo(primeraclase);
	avion->Verificar_Codigo(turista);
	avion->Verificar_Codigo(azafata);//NO LA DEBERIA DE AGREGAR

	


	delete avion;
	system("pause");
	return 0;
}