#ifndef ARBOL_H
#define ARBOL_H

#include <iostream>
#include "Centro.h"

class Nodo
{
    private:
        // Miembros:
        Centro dato;
        Nodo *izquierdo;
        Nodo *derecho;
        friend class ArbolABB;

    public:
        // Constructor:
        Nodo(Centro& dat, Nodo *izq=NULL, Nodo *der=NULL) :
            dato(dat), izquierdo(izq), derecho(der) {}

};

class ArbolABB
{
    private:
        // Punteros de la lista, para cabeza y nodo actual:
        Nodo *raiz;
        Nodo *actual;
        int contador;
        int altura;

    public:
        // Constructor y destructor b�sicos:
        ArbolABB() : raiz(NULL), actual(NULL) {}
        ~ArbolABB();
         // Insertar en �rbol ordenado:
        void Insertar(Centro& dat);
        // Borrar un elemento delrbol:
        void Borrar(Centro& dat);
        // Funcin de bsqueda:
        bool Buscar(Centro& dat);
        // Comprobar si elrbol est vaco:
        bool Vacio(Nodo *r);
        // Comprobar si es un nodo hoja:
        bool EsHoja(Nodo *r);
        // Contar nmero de nodos:
        const int NumeroNodos();
        const int AlturaArbol();
        // Calcular altura de un int:
        int Altura(Centro& dat);
        // Moverse al nodo raiz:
        void Raiz();
        // Aplicar una funcin a cada elemento delrbol:
        void InOrden(void (*func)(Centro&), Nodo *nodo=NULL, bool r=true);
        void PreOrden(void (*func)(Centro&), Nodo *nodo=NULL, bool r=true);
        void PostOrden(void (*func)(Centro&), Nodo *nodo=NULL, bool r=true);

    private:
        // Funciones auxiliares
        void Podar(Nodo* &);
        void auxContador(Nodo*);
        void auxAltura(Nodo*, int);
};

#endif

