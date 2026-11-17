#include "venta.h"
#include <iostream>
using namespace std;

// Constructor
venta::venta(int id_centro, string id_venta, string cod_pizza, Categoria categoria, int unidades, string fecha_venta)
{
    this->id_centro = id_centro;
    this->id_venta = id_venta;
    this->cod_pizza = cod_pizza;
    this->categoria = categoria;
    this->unidades = unidades;
    this->fecha_venta = fecha_venta;
}

venta::~venta()
{
    //dtor
}

void venta::set_id_centro(int id_centro)
{
    this->id_centro = id_centro;
}

// Getters
int venta::get_id_centro()
{
    return this->id_centro;
}

string venta::get_id_venta()
{
    return this->id_venta;
}

string venta::get_cod_pizza()
{
    return this->cod_pizza;
}

Categoria venta::get_categoria()
{
    return this->categoria;
}

int venta::get_unidades()
{
    return this->unidades;
}

string venta::get_fecha_venta()
{
    return this->fecha_venta;
}
// Fgetters

// to_string methods
string venta::cat_to_string()
{
    switch (this->categoria)
    {
        case TRADICIONAL:
            return "Tradicional";
        case CARNE:
            return "Carne";
        case VEGETARIANA:
            return "Vegetariana";
        case QUESOS:
            return "Quesos";
        default:
            return "Desconocida";
    }
}

string venta::cat_to_string(Categoria cat)
{
    switch (cat)
    {
        case TRADICIONAL:
            return "Tradicional";
        case CARNE:
            return "Carne";
        case VEGETARIANA:
            return "Vegetariana";
        case QUESOS:
            return "Quesos";
        default:
            return "Desconocida";
    }
}

void venta::to_string()
{
    cout << "|\t \t" << get_id_centro() << "|\t" << get_id_venta() << "|\t" << get_cod_pizza() << "|\t" << cat_to_string() << "|\t" << get_unidades() << "|\t" << get_fecha_venta() << "|\n";
}
