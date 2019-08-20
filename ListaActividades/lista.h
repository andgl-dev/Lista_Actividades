#ifndef LISTA_H
#define LISTA_H
#include <string>
#include "nodocabecera.h"

class lista
{
public:
    lista();
    void crearActividad(const std::string& dia, const std::string& act);
    void imprimirDia(const std::string& dia);
    void imprimirLista();

private:
    nodoCabecera* diaUno;
};

#endif // LISTA_H
