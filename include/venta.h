#ifndef VENTA_H
#define VENTA_H
#include <string>
using namespace std;

enum Categoria
{
    TRADICIONAL,
    CARNE,
    VEGETARIANA,
    QUESOS,
};

class venta
{
    public:
        venta(int id_centro, string id_venta, string cod_pizza, Categoria categoria, int unidades, string fecha_venta);
        virtual ~venta();
        void set_id_centro(int id_centro);
        int get_id_centro();
        string get_id_venta();
        string get_cod_pizza();
        Categoria get_categoria();
        int get_unidades();
        string get_fecha_venta();
        void to_string();
        string cat_to_string();
        string cat_to_string(Categoria cat);


    protected:

    private:
        int id_centro;
        string id_venta;
        string cod_pizza;
        Categoria categoria;
        int unidades;
        string fecha_venta;
};

#endif // VENTA_H
