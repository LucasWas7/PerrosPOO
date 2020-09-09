#include <iostream>
#include "Perro.h"
int main()
{
    Perro pluto("Pluto",20,14,1,9);
    Perro snopy("Snoopy",15,15,1,9);
    if(pluto.eresMasGordoQue(snopy)==true)
    {
        pluto.presentate();
        pluto.duerme();
        pluto.ladra();
        pluto.come();
        pluto.dibujar();
        cout<<"Yo soy mas gordo que Snoopy"<<endl;
        pluto.MarcarTerritorio();
    }
    else
    {
        snopy.presentate();
        snopy.duerme();
        snopy.ladra();
        snopy.come();
        snopy.dibujar();
        cout<<"Yo soy mas gordo que Pluto"<<endl;
        snopy.MarcarTerritorio();
    }
    return 0;
}
