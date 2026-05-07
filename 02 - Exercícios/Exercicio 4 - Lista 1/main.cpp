/*
Escreva um programa para ler uma temperatura 
dada na escala Fahrenheit e exibir o equivalente em Celsius.
C = 5/9 (F-32)
*/
#include <iostream>

using namespace std;

int main()
{
    float c, f, tf;
    cout << "Coloque sua temperatura em Fahrenheit: ";
    cin >> f;

    tf = (f - 32) / 9;
    c = tf * 5;

    cout <<  "Seu resultado convertido, sera de " << c << " celsius." << endl;
    return 0;
}
