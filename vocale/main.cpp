#include <iostream>
#include <string>

using namespace std;

void vocale(string carattere){
    string vocali = "aeiou";
    string c;
    for(int i=0; i<=vocali.length(); i++){
        c += vocali[i];
        if(carattere == c){
            cout<<"Il carattere "<<carattere<<" e' una vocale!"<<endl;
        }
        continue;
    }

}



int main()
{
    string carattere;
    cout<<"Inserisci carattere: ";
    cin>>carattere;
    vocale(carattere);
    return 0;
}
