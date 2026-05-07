/*
Faça um programa que leia um valor x, 
calcule e mostre a série abaixo considerando os 15 primeiros termos.

S = 1 + (X2/1) + (X3/2) + (X4/3) + (X5/4) + ...
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, o, p;
    float r, s, x;
    cout << "Coloque um numero: ";
    cin >> x;
    r = 1;
    i = 1;
    o = 1;
    while (i <= 15){
    o++;
    s = pow (x, o);
    r += s/i;
    i++;
}
    cout << "O resultado sera " << r << ".";
    return 0;
}
