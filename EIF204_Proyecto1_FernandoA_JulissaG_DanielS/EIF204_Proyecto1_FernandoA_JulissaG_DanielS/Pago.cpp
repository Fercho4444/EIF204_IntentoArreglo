#include "Pago.h"

Pago::Pago(Fecha* fec, double mon){
    fecha = fec;
    monto = mon;
}
Pago:: ~Pago(){
    if(fecha!=NULL){
        delete fecha;
    }
}

Fecha* Pago::getFechaPago(){
    return fecha;
}
double Pago::getMonto(){
    return monto;
}