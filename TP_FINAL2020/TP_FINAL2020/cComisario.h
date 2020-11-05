#pragma once
#include "cPersona.h"
#include "cPasajero.h" //VER SI VA
using namespace std;


class cComisario : public cPersona
{

public:
	cComisario();

	void Reduce(cPasajero *p);
	void Encerrar(cPasajero *p);

	~cComisario();
};

