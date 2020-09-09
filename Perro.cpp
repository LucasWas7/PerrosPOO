#include "Perro.h"
#include <newconio.h>
Perro::Perro(string vnombre, int vpeso, int vcolor, int vx, int vy)
{
    nombre=vnombre;
    peso=vpeso;
    color=vcolor;
    x=vx;
    y=vy;
}
void Perro::presentate()
{
    textcolor(color);
    cout<<"Mi Nombre Es:"<<nombre<<endl;
    cout<<"Peso:"<<peso<<endl;
}
void Perro::duerme()
{
    textcolor(color);
    cout<<"Mi nombre es "<<nombre<<" y dejame dormir Zzzzzzzz...."<<endl;
}
void Perro::ladra()
{
    textcolor(color);
    cout<<"Wauf soy "<<nombre<<endl;
}
void Perro::come()
{
    textcolor(color);
    cout<<"Soy "<<nombre<<" Y amo la comida Yumi"<<endl;
}
void Perro::dibujar()
{
    textcolor(color);
    cout<<"//__//"<<endl;
    cout<<"(o_o)"<<endl;
}
void Perro::MarcarTerritorio()
{
    int vc;
    int hastax;
    int hastay;
    hastax=x+18;
    hastay=y+18;
    for(vc=x;vc<=hastax;vc++)
    {
        textcolor(color);
        gotoxy(vc,y);
        cout<<"*"<<endl;
    }
    for(vc=y;vc<=hastay;vc++)
    {
        textcolor(color);
        gotoxy(x,vc);
        cout<<"*"<<endl;
    }
    for(vc=y;vc<=hastay;vc++)
    {
        textcolor(color);
        gotoxy(hastax,vc);
        cout<<"*"<<endl;
    }
    for(vc=x;vc<=hastax;vc++)
    {
        textcolor(color);
        gotoxy(vc,hastay);
        cout<<"*"<<endl;
    }
    textcolor(color);
    gotoxy(hastax-12, hastay-12);
    cout<<"//__//"<<endl;
    gotoxy(hastax-12, hastay-11);
    cout<<"(o_o)"<<endl;
}
bool Perro::eresMasGordoQue(Perro otroPerro)
{
    bool respuesta;
    if(peso>otroPerro.peso)
    {
        respuesta=true;
    }
    else
    {
        respuesta=false;
    }
    return(respuesta);
}
