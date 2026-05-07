/*
Fulano tem 1,50m e cresce 2cm por ano, enquanto Ciclano tem 1,10m e 
cresce 3cm por ano. Faça um programa que calcule e imprima quantos anos 
serão necessários para que Ciclano seja maior que Fulano
*/
#include <iostream>

using namespace std;

int main()
{
    float ft, fh, fa, ct, ch, ca;
    int a;
    fh = 1.5;
    ch = 1.1;
    a = 0;

    while (fh > ch){
        fh = fh + 0.2;
        ch = ch + 0.3;
        a++;
    }
    cout << "Precisa de " << a << " anos para Ciclano ser maior que Fulano.";
    return 0;
}
