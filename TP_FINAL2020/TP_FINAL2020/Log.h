#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string>
#include <ctime>
#pragma warning(disable  : 4996)
using namespace std;
class Log
{
	string descripcion;
	time_t Timestamp;

public:
	string to_string();
	string getclave();
	Log(string descripcion, time_t Timestamp = time(0));

};
