#include "lista.h"

lista::lista()
{
    this->diaUno=NULL;
}

void lista::crearActividad(const std::string& dia, const std::string& act)
{
    nodoCabecera* nuevo = new nodoCabecera(dia);
    if(this->diaUno == NULL)
    {
        nuevo->insertarAct(act);
        this->diaUno = nuevo;
    }
    else if(nuevo->getDato() < this->diaUno->getDato())
    {
        nuevo->insertarAct(act);
        nuevo->setSig(this->diaUno);
        this->diaUno = nuevo;
    }
    else
    {
        nodoCabecera* aux= this->diaUno;
        bool existe = false;
        while(aux->getSig() != NULL)
        {
            if(aux->getDato()==nuevo->getDato())
            {
                aux->insertarAct(act);
                existe = true;
                break;
            }
            else if(aux->getDato() < nuevo->getDato() && aux->getSig()->getDato() >nuevo->getDato())
            {
                nuevo->insertarAct(act);
                nuevo->setSig(aux->getSig());
                aux->setSig(nuevo);
                existe = true;
                break;
            }
            aux = aux->getSig();
        }
        if(!existe)
        {
            if(aux->getDato() == nuevo->getDato())
            {
                aux->insertarAct(act);
            }
            else
            {
                nuevo->insertarAct(act);
                aux->setSig(nuevo);
            }
        }

    }
}

void lista::imprimirDia(const string &dia)
{
    if(this->diaUno != NULL)
    {
        nodoCabecera *aux = this->diaUno;
        while(aux != NULL)
        {
            if(aux->getDia()==dia)
            {
                break;
            }
            aux = aux->getSig();
        }
        if(aux != NULL)
        {
            std::cout <<"---------------------------------------"<<std::endl;
            std::cout <<"Dia: "<<aux->getDia()<<std::endl;
            nodo*auxAct = aux->getInicial();
            while(auxAct != NULL)
            {
                std::cout <<"Actividad: "<<auxAct->getActividad()<<std::endl;
                auxAct = auxAct->getSiguiente();
            }
            std::cout <<"---------------------------------------"<<std::endl;
        }
        else
        {
            std::cout <<"El dia "<<dia<< " no existe :'("<<std::endl;
        }
    }
    else
    {
        std::cout <<"la lista de actividades esta vacia"<<std::endl;
    }
}

void lista::imprimirLista()
{
    if(this->diaUno != NULL)
    {
        nodoCabecera*aux = this->diaUno;
        std::cout <<"Imprimiendo Actividades"<<std::endl;
        while(aux != NULL)
        {
            std::cout <<"Dia: "<<aux->getDia()<<std::endl;
            nodo*auxAct = aux->getInicial();
            while(auxAct != NULL)
            {
                std::cout <<"Actividad: "<<auxAct->getActividad()<<std::endl;
                auxAct = auxAct->getSiguiente();
            }
            std::cout <<"---------------------------------------"<<std::endl;
            aux=aux->getSig();
        }
    }
    else
    {
        std::cout <<"la lista de actividades esta vacia"<<std::endl;
    }


}

