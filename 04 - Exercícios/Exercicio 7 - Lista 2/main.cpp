/*
Faça um programa para calcular a conta final de um hóspede de um hotel fictício, 
considerando que: 
Serão lidos o nome do hóspede, o tipo do apartamento utilizado (A, B, C ou D), o 
número de diárias utilizadas pelo hóspede e o valor do consumo interno do hóspede.
 
O valor da diária é determinado pela seguinte tabela:
TIPO DO APTO. 						VALOR DA DIÁRIA (R$) 
A									150,00
B									100,00
C									75,00
D									50,00

O valor total das diárias é calculado pela multiplicação
do número de diárias utilizadas pelo valor da diária. 

O subtotal é calculado pela soma do valor total das diárias e o valor do consumo 
interno.
 
O valor da taxa de serviço equivale a 10% do subtotal. 

O total geral resulta da soma do subtotal com a taxa de serviço. 

Escreva a conta final contendo: 
o nome do hóspede, o tipo do apartamento, o número de diárias utilizadas, 
o valor unitário da diária, o valor total das diárias, o valor do consumo interno, 
o subtotal, o valor da taxa de serviço e o total geral.
*/
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
