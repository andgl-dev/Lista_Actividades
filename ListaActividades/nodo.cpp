#include "nodo.h"

nodo::nodo()
{
    this->sig = NULL;
    this->ant = NULL;
    this->actividad = "";
}

     nodo::nodo(const std::string& act)
{
    this->actividad =act;
    this->ant = NULL;
    this->sig = NULL;
}

string nodo::getActividad()
{
    return this->actividad;
}

nodo *nodo::getSiguiente()
{
    return this->sig;
}

nodo *nodo::getAnterior()
{
    return this->ant;
}

void nodo::setSiguiente(nodo *sig)
{
    this->sig = sig;
}

void nodo::setAnterior(nodo *ant)
{
    this->ant = ant;
}
