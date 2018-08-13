#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct libreria
{
    char isbn[13];
    string titolo;
    float prezzo;
};

int main()
{
    libreria libro;
    char opzione;

    ofstream f("C:\\Users\\cri\\Desktop\\libreria.txt", ios::app);

    if(!f)
    {
        cout<<"ERRORE NELLA SCRITTURA SUL FILE!"<<endl;
        return 1;
    }

    cout<<"\t ************************************************** LIBRERIA ************************************************** \n"<<endl;
    cout<<"Inserisci codice isbn: ";
    cin>>libro.isbn;
    f<<"\nCodice isbn: "<<libro.isbn<<endl;
    cout<<"Inserisci titolo libro: ";
    cin.ignore();
    getline(cin,libro.titolo);
    f<<"Titolo libro: "<<libro.titolo<<endl;
    cout<<"Inserisci prezzo libro: ";
    cin>>libro.prezzo;
    f<<"Prezzo libro: "<<libro.prezzo<<" euro"<<endl;

    cout<<"\n\nDesideri rieseguire il programma? [s/n] \n_> ";
    cin>>opzione;

    if(opzione == 's' || opzione == 'S')
    {
        main();
    }
    else
    {
        f.close();
        return 0;
    }

}
