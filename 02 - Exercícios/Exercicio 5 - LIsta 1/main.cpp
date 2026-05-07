#include <iostream>

using namespace std;

int main()
{
    float b, h, a;
    cout << "Vamos calcular a area de um triangulo!" << endl;
    cout << "Digite o tamanho da base do triangulo desejado: ";
    cin >> b;
    cout << "Digite o tamanho da altura do triangulo desejado: ";
    cin >> h;

    a = (b * h) / 2;

    cout << "A area de seu triangulo sera " << a << endl;
    return 0;
}
