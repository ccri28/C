#include <iostream>

using namespace std;


int sum(int, int);
float sum(float, float);
double sum(double, double);
template<typename T> T add(T a, T b);
template<typename A, typename B> B multiply(A a, B b);



int main()
{
    cout <<"sum_int: "<<sum(1,2)<<endl;
    cout <<"sum_float: "<<sum(1.2f, 2.0f)<<endl;

    cout<<endl;

    cout <<"add_float: "<<add<float>(1.2f, 2.0f)<<endl;
    cout <<"add_int: "<<add<int>(1,2)<<endl;

    cout<<endl;
    cout <<"multiply_float: "<<multiply<int,float>(1, 2.5f)<<endl;

    return 0;
}



int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
    return a+b;
}

double sum(double a, double b)
{
    return a+b;
}

template<typename T>
T add(T a, T b)
{
    return a+b;
}

template<typename A, typename B>
B multiply(A a, B b)
{
    return a*b;
}

