#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Corredor{
private:
	char sexo;
	double estatura;

public:
	Corredor(char, double);
	virtual ~Corredor();

	char getSexo();
	double getEstatura();

	void setSexo(char);
	void setEstatura(double);

	string toString();


};

