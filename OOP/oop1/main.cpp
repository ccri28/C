#include <iostream>
#include <string>

using namespace std;

#include "computer.cpp"

int main()
{
    Computer c1;
    c1.setMarca("Olidata");
    c1.setPrezzo(50.5);

    cout<<"Marca: "<<c1.getMarca()<<endl;
    cout<<"Prezzo: "<<c1.getPrezzo()<<endl;

    c1.Accenditi();

    return 0;
}
