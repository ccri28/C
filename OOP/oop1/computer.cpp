#include "computer.h"

Computer::Computer()
{
    acceso = false;
}

void Computer::Accenditi()
{
    if(!acceso)
    {
        acceso = true;
        cout<<"Ora sono acceso!"<<endl;
    }
    else
    {
        cout<<"Sono gia' acceso!"<<endl;
    }
}

void Computer::Spegniti()
{
    if(acceso)
    {
        acceso = false;
        cout<<"Ora sono spento!"<<endl;
    }
    else
    {
        cout<<"Sono gia' spento!"<<endl;
    }
}

void Computer::setMarca(string m)
{
    marca = m;
}

void Computer::setPrezzo(float p)
{
    prezzo = p;
}

string Computer::getMarca()
{
    return marca;
}

float Computer::getPrezzo()
{
    return prezzo;
}
