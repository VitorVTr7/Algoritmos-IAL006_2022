/*
Faça um programa que leia um número N, 
some todos os números inteiros de 1 a N, e mostre o resultado obtido. 
*/
#include <iostream>

using namespace std;

int main()
{
    int x, i, s;
    cout << "Coloque um numero inteiro:" << endl;
    cin >> x;
    s = x;
    for (i = 0; i < x; i++){
            s+= i;
    }
    cout << "A soma dos valores e: " << s << endl;
    return 0;
}
