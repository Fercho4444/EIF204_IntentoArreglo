#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class ErroresExcep : public exception {
private:
	int codigoErr;

public:
	ErroresExcep(int);
	const char* what() const throw();
};