/*
Construir um programa que calcule o valor de S, usando os 20 primeiros termos. 
S = (X/1) + (X/2) + (X/3) + ... + (X/20)
*/
#include <iostream>

using namespace std;

int main()
{
    float x, r, t;
    int i, d;
    cout << "Coloque um numero: " << endl;
    cin >> x;
    d = 1;
    for (i = 1; i <= 20; i++)
    {
    r = x / d;
    t += r;
    d++;
    }
    cout << "O resultado sera: " << t << endl;


    return 0;
}
