#include <iostream>
#include <math.h>

using namespace std;

float areaTriangoloErone(float a, float b, float c)
{
    float p;
    float area;

    p = (a+b+c)/2;

    area = sqrt(p*(p-a)*(p-b)*(p-c));

    return area;
}

void stampaArea(float l1, float l2, float l3)
{
    cout<<"L'area del triangolo e': "<<areaTriangoloErone(l1, l2, l3)<<endl;
}

void calcolaArea()
{
    float a, b, c;

    cout<<"a: "<<flush;
    cin>>a;

    cout<<"b: "<<flush;
    cin>>b;

    cout<<"c: "<<flush;
    cin>>c;

    stampaArea(a, b, c);
}



int main()
{
    calcolaArea();

    return 0;
}
