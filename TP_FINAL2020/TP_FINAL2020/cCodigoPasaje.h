#pragma once
#include <string>  

using namespace std;

class cCodigoPasaje
{
private:
	string Tipo;
	const string Dni;
	int Fila;
	char Asiento;

public:
	cCodigoPasaje();
	cCodigoPasaje(string tipo, const string dni, int fila, char asiento);

	string To_StringCodigo();
	void Set_Asiento(char aciento);
	const string Get_Dni();

	~cCodigoPasaje();
};

