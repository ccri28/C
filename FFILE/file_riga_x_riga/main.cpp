#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char riga[100];
    char *ris;
    FILE* file;

    file = fopen("C:\\Users\\cri\\Desktop\\C++\\ciao.txt", "r");
    if(file == NULL)
    {
        perror("Errore");
        return 1;
    }

    while(1)
    {
        ris = fgets(riga,100,file);
        if(ris == NULL)
        {
            break;
        }
        cout<<riga;
    }

    fclose(file);

    return 0;
}
