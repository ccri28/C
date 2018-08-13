#include <iostream>
#include <string>

using namespace std;

void reverser(string stringa){
    int indice = stringa.length() - 1;
    string nuova_stringa = "";
    while (indice >= 0){
        nuova_stringa += stringa[indice];
        indice--;
    }
    cout<<"La nuova stringa e': "<<nuova_stringa<<endl;
}

int main()
{
    string stringa;
    cout <<"Inserisci una stringa: ";
    cin>>stringa;
    reverser(stringa);
    return 0;
}
