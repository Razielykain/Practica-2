#ifndef CENTRO_H
#define CENTRO_H
#include <string>
#include "Lista.h"
using namespace std;

class Centro
{
    public:
        Centro(int id, string localidad, Lista *ventas);
        virtual ~Centro();
        int getId();
        string getLocalidad();
        Lista* getVentas();
        void to_string();
    protected:

    private:
        int id;
        string localidad;
        Lista *ventas;
};

#endif // CENTRO_H
