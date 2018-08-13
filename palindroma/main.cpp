#include <iostream>
#include <string>

using namespace std;

void palindroma(string stringa){
    int indice = stringa.length() - 1;
    string nuova_stringa = "";
    while(indice >= 0){
        nuova_stringa += stringa[indice];
        indice--;
    }
    if(stringa == nuova_stringa){
        cout<<"La stringa "<<stringa<<" è palindroma!"<<endl;
    }
    else{
        cout<<"La stringa "<<stringa<<" non è palindroma!"<<endl;
    }
}

int main()
{
    string stringa;
    cout<<"Inserisci una stringa di testo: ";
    cin>>stringa;
    palindroma(stringa);
    return 0;
}
