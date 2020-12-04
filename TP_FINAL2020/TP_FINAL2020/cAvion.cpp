#include "cAvion.h"

Logger cAvion::logger = NULL; 

cAvion::cAvion()
{
	ListaCodigosPasajes = new cLista<cCodigoPasaje>(NMAX);
	ListaPersonas = new cLista<cPersona>(NMAX);
	bool aux;
	aux=ListaCodigosPasajes[0].AgregarItem(new cCodigoPasaje("TU", "23456456", 05, 'F'));
	aux = ListaCodigosPasajes[1].AgregarItem(new cCodigoPasaje("BS", "23456456", 06, 'J')); //NO DEBERIA DE AGREGARLO A LA LISTA PERSONAS
	aux = ListaCodigosPasajes[2].AgregarItem(new cCodigoPasaje("AZ", "45345345", 03, 'A'));
	aux = ListaCodigosPasajes[3].AgregarItem(new cCodigoPasaje("PC", "43234789", 01, 'B'));
	aux = ListaCodigosPasajes[4].AgregarItem(new cCodigoPasaje("BS", "13345345", 12, 'C'));
	aux = ListaCodigosPasajes[5].AgregarItem(new cCodigoPasaje("CO", "13456567", 03, 'D'));
	aux = ListaCodigosPasajes[6].AgregarItem(new cCodigoPasaje("TU", "13453635", 12, 'A'));//NO DEBERIA DE AGREGARLO A LA LISTA PERSONAS

	/*int Num,Num2;
	srand(time_t(NULL));
	for (int i = 0; i < 10; i++)
	{

		Num = rand() % 100;
		Num2 = rand() % 10;
		if (Num < 19)//primera clase
		{
			//ListaCodigosPasajes->BuscarItem( cCodigoPasaje("Num2"));
			ListaCodigosPasajes->AgregarItem(new cCodigoPasaje("PC", "dni", Num, Num2));
			break;
		}
		if (Num < 49)// clase ejecutiva
		{

			ListaCodigosPasajes->AgregarItem(new cCodigoPasaje("BS", "dni", Num, Num2));

		}
		if (Num <99)//clase turista
		{

			ListaCodigosPasajes->AgregarItem(new cCodigoPasaje("TU", "dni", Num, Num2));

		}
	
	}*/

}

void cAvion::Registro_Tripulantes(cPersona* persona)
{
	ListaPersonas->AgregarItem(persona);

}

void cAvion::AsignarAciento_Comisario(cComisario * Persona)//RESERVA EL ASIENTO 01 PARA EL COMISARIO SIEMPRE
{
	Persona->Set_Asiento('A');
}

void cAvion::Verificar_Codigo(cPersona* Persona)
{
	cCodigoPasaje* aux = ListaCodigosPasajes->BuscarItem(Persona->getclave());
	if (aux != NULL)
		Registro_Tripulantes(Persona);
}


unsigned int cAvion::Get_CantidadPersonasAbordo()
{
	return ListaPersonas->getCA();
}


cAvion::~cAvion()
{
	delete ListaCodigosPasajes;
	delete ListaPersonas;
}
