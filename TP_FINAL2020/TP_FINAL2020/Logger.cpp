#include "Logger.h"

Logger::Logger(int Nmax) :cLista<Log>(Nmax)
{

}

Logger::~Logger()
{
}

void Logger::Registrar(Log* log)
{
	AgregarItem(log);
}

void Logger::Registrar(string descripcion)
{
	AgregarItem(new Log(descripcion));
}

void Logger::Listar()
{
	for (unsigned int i = 0; i <= CA; ++i)
		cout << vector[i]->to_string() << endl;
}

bool Logger::AgregarItem(Log* log)
{
	if (CA < NMAX)
		vector[CA++] = log;
	else throw new exception("No hay tamanio suficiente para agregar el item");;
	return true;
}
