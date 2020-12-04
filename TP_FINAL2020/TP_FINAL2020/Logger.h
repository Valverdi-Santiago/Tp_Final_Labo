#pragma once
#include "cLista.h"
#include "Log.h"
#include <iostream>
#include <string>
using namespace std;

class Logger : protected cLista<Log>
{
	unsigned int ca=0;

public:

	Logger(int Nmax = NMAX);
	virtual ~Logger();

	void Registrar(Log* log);
	void Registrar(string descripcion);
	void ListarLog();
	bool AgregarItem(Log* log);
};