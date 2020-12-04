#pragma once
#include "cLista.h"
#include "Log.h"
#include <iostream>
#include <string>
using namespace std;

class Logger : protected cLista<Log>
{
	unsigned int CA=0;

public:

	Logger(int Nmax = NMAX);
	virtual ~Logger();

	void Registrar(Log* log);
	void Registrar(string descripcion);
	void Listar();
	bool AgregarItem(Log* log);
};