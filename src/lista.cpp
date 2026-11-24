#include "lista.h"

using namespace std;

Lista::~Lista()
{
    pnodo aux;
    while(cabeza)
    {
        aux = cabeza;
        cabeza = cabeza->siguiente;
        delete aux;
        len--;
    }
    actual = NULL;
}

int Lista::getLong()
{
    return len;
}

void Lista::insertarNodo(venta v) {
    pnodo aux;

    if (listaVacia())
    {
        cabeza = new Nodo(v, NULL);
        final=cabeza;
        len = 1;
    }
    else
    {
        aux= new Nodo(v,NULL);
        final->siguiente=aux;
        final=aux;
        len++;
    }
}

void Lista::borrarNodo(string id) {
    pnodo anterior;

    actual = cabeza;

    while (actual->valor.get_id_venta()!=id && (actual->siguiente)!=NULL)
    {
        anterior=actual;
        actual=actual->siguiente;
    }

    if (actual->valor.get_id_venta() == id)
    { //comprobacin de que est v en la lista
        if(actual==cabeza)
            cabeza = actual->siguiente;
        else
        {
            anterior->siguiente = actual->siguiente;
            if (actual==final)
            {
                final=anterior;
            }
        }
        actual->siguiente=NULL;
        delete actual;
        len--;
    }
}


bool Lista::listaVacia()
{
    return cabeza == NULL;
}

void Lista::esCabeza()
{
    actual = cabeza;
}

void Lista::esFinal()
{
    esCabeza();
    if(!listaVacia())
        while(actual->siguiente)
            esSiguiente();
}

void Lista::esSiguiente()
{
    if(actual) actual = actual->siguiente;
}

bool Lista::esActual()
{
    return actual != NULL;
}

venta Lista::valorActual()
{
    return actual->valor;
}


void Lista::recorrerLista()
{
    pnodo aux;
    aux = cabeza;

    while(aux)
    {
        cout << "|\t \t" << aux->valor.get_id_centro() << "|\t" << aux->valor.get_id_venta() << "|\t" << aux->valor.get_cod_pizza() << "|\t" << aux->valor.cat_to_string() << "|\t" << aux->valor.get_unidades() << "|\t" << aux->valor.get_fecha_venta() << "|\n";
        aux = aux->siguiente;
    }
    cout << endl;
}






