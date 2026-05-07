/*
Construir um algoritmo que leia um conjunto A de 20 elementos, construa e imprima outro 
conjunto B da seguinte forma: 
Os elementos de índices pares correspondem a A3. 
Os elementos de índices ímpares correspondem a A/2. 
*/
#include <iostream>
#include <math.h>
#define X 20

using namespace std;

int main()
{
    float A[X], B[X];
    int i, j;

    for (i = 0; i < 20; i++){
        cout << "A ["<< i << "]: ";
        cin >>  A[i];
    }

    for (i = 0; i < 20; i++){
        j = A[i];
        if(j % 2 == 0){
        B[i] = A[i];
        cout << "B [" << i << "]: " << B[i] << endl;
        }else{
        B[i] = A[i] / 2;
        cout << "B [" << i << "]: " << B[i] << endl;
        }
    }
}
