/*
Deseja-se calcular a conta de consumo de energia elétrica de um consumidor. 
Para isto, escreva um programa que leia o código do consumidor, 
o preço do kwh e a quantidade de kwh consumido. 
Ao final, exiba o código do consumidor e o total a pagar. 

 Total a pagar = preço x quantidade

 Total a pagar mínimo = R$ 11,20 
*/
#include <iostream>

using namespace std;

int main()
{
    int cc;
    float pw, qw, tf;
    cout << "Coloque o seu codigo de consumidor (8 numeros): ";
    cin >> cc;
    cout << "Coloque o preco do kwh: ";
    cin >> pw;
    cout << "Coloque a quantidade consumida de kwh: ";
    cin >> qw;
    cout << "" << endl;

    tf = pw * qw;

    if (tf <= 11.20){
        cout << "Codigo do consumidor: " << cc << endl;
        cout << "Valor a pagar: R$11.20" << endl;
    }else{
        cout << "Codigo do consumidor: " << cc << endl;
        cout << "Valoa a pagar: R$" << tf << endl;
    }
    return 0;
}
