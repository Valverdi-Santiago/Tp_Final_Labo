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
	//Agregar
	//Listar
	//Guardar_archivo xxxx.log
	Logger(int Nmax = NMAX);
	virtual ~Logger() {

	}

	void Registrar(Log* log) {
		AgregarItem(log);
	}

	void Registrar(string descripcion) {
		AgregarItem(new Log(descripcion));
	}
	void Listar() {
		for (unsigned int i = 0; i <= CA; ++i)
			cout << vector[i]->to_string() << endl;
	}
	bool AgregarItem(Log *log)
	{
		if (CA < NMAX)
			vector[CA++] = log;
		else throw new exception("No hay tamanio suficiente para agregar el item");;
		return true;
	}
};