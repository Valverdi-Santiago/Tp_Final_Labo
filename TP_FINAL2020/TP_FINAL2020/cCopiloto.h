#pragma once
#include "cPiloto.h"
using namespace std;

class cCopiloto : public cPiloto
{

public:
	cCopiloto(string nombre, const string dni, cCodigoPasaje *codigodelpasaje);

	void Comunicar_Torre();

	~cCopiloto();
};

