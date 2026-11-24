#ifndef LISTAS_H
#define LISTAS_H

#include <iostream>
#include <venta.h>

class Nodo
{
private:
    venta valor;
    Nodo *siguiente;
    friend class Lista;

public:
    Nodo(venta v, Nodo *sig = NULL)
    {
        valor = v;
        siguiente = sig;
    }
};
typedef Nodo *pnodo;

class Lista
{
private:
    pnodo cabeza, actual, final;
    int len;

public:
    Lista()
    {
        cabeza = actual = final= NULL;
        len = 0;
    }
    ~Lista();

    int getLong();
    void insertarNodo(venta v);
    void borrarNodo(string id);
    bool listaVacia();
    void esCabeza();
    void esFinal();
    void esSiguiente();
    bool esActual();
    venta valorActual();
    void recorrerLista();

};


#endif
