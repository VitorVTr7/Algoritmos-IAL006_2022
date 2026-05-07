/*
Elabore um programa que leia dois números inteiros, 
calcule o seu produto e mostre o resultado.
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y, resultado;
    cout << "Coloque dois numeros:" << endl;
    cout << "Numero 1: ";
    cin >> x;
    cout << "Numero 2: ";
    cin >> y;

    resultado = x + y;

    cout << "Seu resultado sera " << resultado << ".";
    return 0;
}
