/*
Escreva um programa para calcular e exibir o comprimento 
de uma circunferência, sendo dada o valor de seu raio.  
C = 2PiR
*/
#include <iostream>

using namespace std;

int main()
{
    float r, c;
    cout << "Coloque o seu raio: " << endl;
    cin >> r;

    c = 2 * 3.14 * r;

    cout << "Sua circunferencia sera: " << c << endl;
    return 0;
}
