#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    char ap;
    int d;
    float ci, apn, s, vd, vs, vt;
    cout << "Coloque seu nome: ";
    cin >> n;
    cout << "Tipo do apartamento utilizado: ";
    cin >> ap;

    switch (ap){

        case 'a':
            apn = 150;
            break;


        case 'A':
            apn = 150;
            break;

        case 'b':
            apn = 100;
            break;

        case 'B':
            apn = 100;
            break;

        case 'c':
            apn = 75;
            break;

        case 'C':
            apn = 75;
            break;

        case 'd':
            apn = 50;
            break;

        case 'D':
            apn = 50;
            break;

        default:
            cout << "Letra de apartamento inexistente.";
            return 0;
    }

    cout << "Dias hospedados: ";
    cin >> d;
    if (d <= 0){
        cout << "Erro: Dias menor ou igual a zero. Tente de novo.";
        return 0;
    }else{
        cout << "Consumo interno: R$";
        cin >> ci;
        if (ci < 0){
        cout << "Erro: Numero digitado eh negativo. Tente de novo.";
        return 0;
        }else{
            vd = apn * d;
            vs = vd + ci;
            s = vs * 0.10;
            vt = vs + s;

            cout << "\n";
            cout << "Nome do hospede: " << n << endl;
            cout << "Tipo do apartamento: " << ap << endl;
            cout << "Numero de dias: " << d << " dias." << endl;
            cout << "Valor - Unitario da diaria: R$" << apn << endl;
            cout << "Valor - Total diarias: R$" << vd << endl;
            cout << "Valor - Consumo interno: R$" << ci << endl;
            cout << "Valor - Subtotal: R$" << vs << endl;
            cout << "Valor - Taxa de servico: R$" << s << endl;
            cout << "Valor - Total geral: R$" << vt << endl;
        }}

    return 0;
}
