#include "cAvion.h"



cAvion::cAvion()
{
	int Num,Num2;
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

			ListaCodigosPasajes->AgregarItem(new cCodigoPasaje("TU", "dni", Num, Num2));//NO DEJA HACER ESTO PORQUE EL NUM2 DEBERIA DE SER UN CHAR

		}
	
	}

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
	for (unsigned int i = 0; i < ListaCodigosPasajes->getCA(); i++)
	{
		cCodigoPasaje* aux = ListaCodigosPasajes[i].BuscarItem(Persona->Get_DNI());
		if (aux != NULL)
			Registro_Tripulantes(Persona);

	}
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
