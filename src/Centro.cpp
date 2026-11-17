#include "Centro.h"
#include <iostream>
using namespace std;

Centro::Centro(int id, string localidad, Lista *ventas)
{
    this->id = id;
    this->localidad = localidad;
    this->ventas = ventas;
    //ctor
}

Centro::~Centro()
{
    //dtor
}

int Centro::getId()
{
    return this->id;
}

string Centro::getLocalidad()
{
    return this->localidad;
}

Lista* Centro::getVentas()
{
    return this->ventas;
}

void Centro::to_string()
{
    cout
    << "Centro ID: " << this->id 
    << "  Localidad: " << this->localidad 
    << "    Ventas: " << this->ventas->getLong() 
    << endl;
}
