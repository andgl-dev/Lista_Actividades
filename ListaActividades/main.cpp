#include <QCoreApplication>
#include "lista.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    lista *l = new lista();
    l->crearActividad("miercoles","desayunar");
    l->crearActividad("martes","despertar");
    l->crearActividad("jueves","correr");
    l->crearActividad("lunes","mundo");
    l->crearActividad("viernes","nadar");
    //l->crearActividad("sabado","volar");
    l->crearActividad("domingo","regresar");
    l->crearActividad("lunes","hola");
    l->crearActividad("lunes","sudo");
    l->crearActividad("lunes","apt");
    l->crearActividad("lunes","get");
    l->crearActividad("lunes","gg");
    l->crearActividad("lunes","fin");
    l->crearActividad("domingo","otra");
    l->crearActividad("domingo","prueba");
    l->imprimirLista();
    std::cout <<"-----imprimiendo dia especifico----------"<<std::endl;
    l->imprimirDia("lunes");
    std::cout <<"-----imprimiendo dia especifico----------"<<std::endl;
    l->imprimirDia("sabado");
    return a.exec();
}
