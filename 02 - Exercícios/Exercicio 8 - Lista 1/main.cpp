/*
Elabore um programa que leia dois números inteiros, 
calcule e mostre o primeiro número multiplicado por 5 
e o segundo número somado com 10. 
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y, resultado1, resultado2;
    cout << "Coloque dois numeros:" << endl;
    cout << "Numero 1: ";
    cin >> x;
    cout << "Numero 2: ";
    cin >> y;

    resultado1 = x * 5;
    resultado2 = y + 10;

    cout << "O primeiro numero multiplicado por 5, dara o resultado: " << resultado1 << endl;
    cout << "O segundo numero tendo uma adicao com 10, dara o resultado: " << resultado2;

    return 0;
}
