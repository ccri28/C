#ifndef COMPUTER_H_INCLUDED
#define COMPUTER_H_INCLUDED



#endif // COMPUTER_H_INCLUDED

class Computer
{
    public:
        string marca;
        float prezzo;
        bool acceso;

        Computer();
        void Accenditi();
        void Spegniti();
        void setMarca(string m);
        void setPrezzo(float p);
        string getMarca();
        float getPrezzo();

};
