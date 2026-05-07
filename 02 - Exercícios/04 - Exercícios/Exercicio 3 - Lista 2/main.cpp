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
