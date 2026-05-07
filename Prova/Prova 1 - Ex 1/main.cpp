/*
Escreva um programa que o usuário possa colocar nome dele e 3 produtos que ele 
desejar anotar. Assim no final deverá mostrar o nome do usuário e seus respectivos 
produtos.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char  n1 [40], a [40], b [40], c [40];
    cout << "Coloque o seu primeiro nome: ";
    cin >> n1;
    cout << "Primeiro produto: ";
    cin >> a;
    cout << "Segundo produto: ";
    cin >> b;
    cout << "Terceiro produto: ";
    cin >> c;

    cout << "" << endl;
    cout << "Seja bem vindo para seu armazem " << n1 << endl;
    cout << "Voce tem os seguintes produtos:" << endl;
    cout << "A. " << a << endl;
    cout << "B. " << b << endl;
    cout << "C. " << c << endl;
    return 0;
}
