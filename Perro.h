#ifndef PERRO_H
#define PERRO_H

#include <iostream>
using namespace std;
class Perro
{
    public:
        Perro(string nombre, int vpeso, int acolor, int enx, int eny);
        void presentate();
        void duerme();
        void ladra();
        void come();
        void dibujar();
        void MarcarTerritorio();
        bool eresMasGordoQue(Perro);

    protected:
    private:
        string nombre;
        int peso;
        int color;
        int x;
        int y;
};

#endif // PERRO_H
