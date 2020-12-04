#include "Log.h"

string Log::to_string()
{
	string retornar = "";
	char* dt = ctime(&Timestamp); //Sat Jan  8 20:07:41 2011
	string tiempo = string(dt);
	retornar = tiempo.substr(0, tiempo.length() - 1) + " - " + descripcion;
	return retornar;
}

string Log::getclave()
{
	return descripcion;
}

Log::Log(string descripcion, time_t Timestamp)
{
	this->descripcion = descripcion;
	this->Timestamp = Timestamp;
}