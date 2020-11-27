#include <string>
#include <iostream>
#include "cAvion.h"
#include "cCodigoPasaje.h"
#include "cPersona.h"



int main()
{
	//Crear un avion
	//Crear una lista de Personas con sus codigos
	//Agregar y verificar las pasajeros y tripulantes al avion, mediante el codigo (la lista de codigos habilitada para viajar la tiene el avion)
	//Hacer un simulador, donde ocurren distintos eventos, los cuales se alamecan en el logger
	//Mostrar en pantalla todos los eventos que pasaron

	cAvion *avion = new cAvion();
	
	cPersona *persona1 = new cPersona("Juan", "23456456", new cCodigoPasaje("TU", "23456456", 05, 'F'));
	cPersona *persona2 = new cPersona("Victoria", "45345345", new cCodigoPasaje("BS", "45345345", 03, 'A'));
	cPersona *persona3 = new cPersona("Maria", "43234789", new cCodigoPasaje("PC", "43234789", 01, 'B'));
	cPersona *persona4 = new cPersona("Jorge", "13345345", new cCodigoPasaje("BS", "13345345", 12, 'C'));

	avion->Verificar_Codigo(persona1);
	avion->Verificar_Codigo(persona2);
	avion->Verificar_Codigo(persona3);
	avion->Verificar_Codigo(persona4);
	avion->Verificar_Codigo(persona1);//NO LA DEBERIA DE AGREGAR

	


	delete avion;
	system("pause");
	return 0;
}