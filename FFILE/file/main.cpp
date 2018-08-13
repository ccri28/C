#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    FILE* file;
    char riga[100];
    file = fopen("C:\\Users\\cri\\Desktop\\C++\\ciao.txt","r");
    if(file == NULL)
    {
        cout<<"Problema rilevato!"<<endl;
        return 1;
    }
    fgets(riga,100,file);
    fclose(file);
    cout<<riga<<endl;

    return 0;
}
