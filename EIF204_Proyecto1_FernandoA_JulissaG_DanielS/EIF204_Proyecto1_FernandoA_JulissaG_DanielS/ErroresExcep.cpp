#include "ErroresExcep.h"

ErroresExcep::ErroresExcep(int cod) : codigoErr(cod) {}

const char* ErroresExcep::what() const throw() {
	switch (codigoErr) {
	case 100:
		return "100. <EL DATO DIGITADO NO ES UN NUMERO ENTERO>";
		break;
	}
	return "";
}