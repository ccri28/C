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

    cout<<"Var1 before: "<<var1<<endl;
    cout<<"Var2 before: "<<var2<<endl;

    int temp;
    temp = *p; // temp vale 10
    *p = *p1; // var1 vale 20
    *p1 = temp; // var2 vale 10

    cout<<endl<<"Var1 after: "<<*p<<endl;
    cout<<"Var2 after: "<<*p1<<endl;

    return 0;
}
