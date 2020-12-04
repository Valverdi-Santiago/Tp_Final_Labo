#include <string>
#include <iostream>
#include "cAvion.h"
#include "cCodigoPasaje.h"
#include "cPersona.h"
#include "cPiloto.h"
#include "cPrimera.h"
#include "cTurista.h"
#define MAX 10

int main()
{
	//Crear un avion
	//Crear una lista de Personas con sus codigos
	//Agregar y verificar las pasajeros y tripulantes al avion, mediante el codigo (la lista de codigos habilitada para viajar la tiene el avion)
	//Hacer un simulador, donde ocurren distintos eventos, los cuales se alamecan en el logger
	//Mostrar en pantalla todos los eventos que pasaron

	cAvion* avion = new cAvion();

	cPasajero *primera= new cPrimera("Juan", "23456456", new cCodigoPasaje("TU", "23456456", 05, 'F'));
	cPersona *azafata = new cAzafata("Victoria", "45345345", new cCodigoPasaje("AZ", "45345345", 03, 'A'));
	cPasajero *primeraclase = new cPrimera("Maria", "43234789", new cCodigoPasaje("PC", "43234789", 01, 'B'));
	cPasajero *turista = new cTurista("Jorge", "13345345", new cCodigoPasaje("BS", "13345345", 12, 'C'));
	cComisario *comisario = new cComisario("Eduardo", "13456567", new cCodigoPasaje("CO", "13456567", 03, 'D'));
	cPersona* piloto = new cPiloto("Martin", "13564746", new cCodigoPasaje("PI", "13564746", 00, 'A'));
	
	avion->Verificar_Codigo(azafata);
	avion->Verificar_Codigo(primera);
	avion->Verificar_Codigo(turista);
	avion->Verificar_Codigo(azafata);//NO LA DEBERIA DE AGREGAR
	avion->Verificar_Codigo(piloto);
	avion->AsignarAciento_Comisario(comisario);
	
	primera->Banio();
	primeraclase->Dormir();
	primera->Llamar_Azafata(azafata);
	cout << "..........................." << endl;
	turista->Perdir_Alimento(comisario); //NO LO DEBERIA DE HACER 
	

	//cAvion::logger.Listar();

	cout << "\n----------LOS PASAJEROS SON----------" << endl;
	avion->ListaPersonas->Listar();

	delete avion;
	system("pause");
	return 0;
}