#include <iostream>

using namespace std;

float operate(float, float);
float operate(float);
float operate(int, int);
float operate(float, float, char);

int main()
{
    cout<<operate(2.4f,2.4f,'-')<<endl;
    cout<<operate(2.5f)<<endl;
    return 0;
}


float operate(float a, float b)
{
    return a/b;
}

float operate(float a)
{
    return a/2;
}

float operate(int a, int b)
{
    return (float)a/b;
}

float operate(float a, float b, char op)
{
    switch(op)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    default:
        cout<<"ERRORE"<<endl;
        return 0;
        break;
    }

}
