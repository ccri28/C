#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream f("C:\\Users\\cri\\Desktop\\frasi.txt", ios::app);

    if(!f)
    {
        perror("ERRORE");
        return 1;
    }

    string frase;
    char opzione;
    cout<<"\t ***************************************** Scrittura su file *****************************************"<<endl;
    cout<<"Inserisci una frase sul file: \n_> ";
    cin.ignore();
    getline(cin, frase);
    f<<frase<<endl;

    cout<<endl<<"Desideri rieseguire il programma? [s/n] \n_> ";
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
