#pragma once
#include <iostream>
#include <sstream>

#include "Fecha.h"

using namespace std;

class Pago {
private:
	Fecha* fecha;
	double monto;

public:
	Pago(Fecha*, double);
	virtual ~Pago();
	Fecha* getFechaPago();
	double getMonto();
};