#include <iostream>

using namespace std;

double sum_valore(int a, float b, double c)
{
    return (a+b+c);
}

double sum_referenza(int a, const float& b, const double& c)
{
    return (a+b+c);
}

int main()
{
    int a = 2;
    float b = 2.5f;
    double c = 3.567899f;

    cout<<sum_valore(a, b, c)<<endl;
    cout<<sum_referenza(a, b, c)<<endl;

    return 0;
}
