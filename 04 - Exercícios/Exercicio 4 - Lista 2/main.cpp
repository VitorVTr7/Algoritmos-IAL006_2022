/*
Escreva um programa que determine o grau de obesidade de uma pessoa,
sendo fornecido o peso e a altura da pessoa. 
O grau de obesidade é determinado pelo índice da massa corpórea 
(massa = peso / altura2 ) através da tabela abaixo:

MASSA CORPÓREA: 			GRAU DE OBESIDADE 
< 26 						Normal 
>= 26 e < 30 				Obeso 
>= 30						Obeso Mórbido 
*/
#include <iostream>

using namespace std;

int main()
{
    float p, a, m;
    cout << "Peso(KG): " << endl;
    cin >> p;
    cout << "Altura(M): " << endl;
    cin >> a;

    m = p / (a * a);

    if (m < 26){
        cout << "Seu grau de obesidade e: Normal.";
    }else{
        if (m >= 26 && m < 30){
            cout << "Seu grau de obesidade e: Obeso.";
        }else{
            if (m >= 30){
                cout << "Seu grau de obesidade e: Obeso morbido.";
    }}}
    return 0;
}
