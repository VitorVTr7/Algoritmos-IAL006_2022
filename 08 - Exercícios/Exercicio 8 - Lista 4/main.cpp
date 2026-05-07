/*
Elabore um programa para ler um conjunto de 100 números inteiros, contar e escrever 
quantos deles são superiores a média aritmética do conjunto, 
e quantos são inferiores. Mostre os resultados. 
*/
#include <iostream>
#include <math.h>
#define X 100

using namespace std;

int main()
{
    int i;
    float cima, mediaa,  x[X];

    for(i=0; i<X; i++){
        cout << "Coloque um numero natural - x [" << i << "]: ";
        cin >> x[i];
    }

    for(i=0; i<X; i++){
        cima += x[i];
        cout << "cima: " << cima << endl;
    }
    mediaa = cima / X;
    cout << "mediaa: " << mediaa << endl;

    for (i=0; i<X; i++){
    if (x[i] > mediaa){
        cout << "x [" << i << "]: " << x[i] << "|| eh maior que a media aritmetica" << endl;
    }else{
        cout << "x [" << i << "]: " << x[i] << "|| eh menor que a media aritmetica" << endl;
    }}


    return 0;
}
