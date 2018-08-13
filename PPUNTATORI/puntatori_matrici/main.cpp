#include <iostream>

using namespace std;

int main()
{
    cout<<"\nElementi di una matrice: "<<endl;
    int mat[2][2];
    mat[0][0] = 10;
    mat[0][1] = 20;
    mat[1][0] = 30;
    mat[1][1] = 40;

    /*
    10 20
    30 40
    */

    cout<<"\nIndirizzo di mem della prima riga: "<<mat[0]<<endl;
    cout<<"\n1^ elemento della 1^ riga: "<<*(mat[0])<<endl;
    cout<<"\n2^ elemento della 1^ riga: "<<*(mat[0] + 1)<<endl;

    cout<<"\n\nIndirizzo di mem della seconda riga: "<<mat[1]<<endl;
    cout<<"\n1^ elemento della 2^ riga: "<<*(mat[1])<<endl;
    cout<<"\n2^ elemento della 2^ riga: "<<*(mat[1] + 1)<<endl;

    /* nr elementi che separa mat1 da mat0
    cout<<"\n"<<mat[1] - mat[0]<<endl;
    */

    //quali sono i byte di differenza tra mat1 e mat0
    cout<<"\n"<<(mat[1] - mat[0] + 1) * sizeof(int)<<endl;

    return 0;
}
