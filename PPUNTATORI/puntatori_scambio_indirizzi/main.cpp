#include <iostream>

using namespace std;

int main()
{
    int var1 = 10;
    int *p;
    p = &var1;

    int var2 = 20;
    int *p1;
    p1 = &var2;

    cout<<"Ind var1 before: "<<p<<endl;
    cout<<"Ind var2 before: "<<p1<<endl;

    int *temp;
    temp = p; // temp contiene indirizzo di var1
    p = p1; // var1 contiene l'ind di var2
    p1 = temp; // var2 contiene l'ind di var1

    cout<<endl<<"Ind var1 after: "<<p<<endl;
    cout<<"Ind var2 after: "<<p1<<endl;

    return 0;
}
