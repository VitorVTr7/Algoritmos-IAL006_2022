/*
Faça um programa que dado as três notas de um aluno, 
determine e exiba a sua média final e o seu conceito, sabendo-se que:

A média final é calculada pela média aritmética das 3 notas. 

O conceito é determinado de com base na tabela a seguir: 
MÉDIA FINAL 				CONCEITO 
>= 8.0						A
>= 5.0 e < 8.0				B
< 5.0						C
*/
#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, m;
    cout << "Coloque a primeira nota: " << endl;
    cin >> n1;
    cout << "Coloque a segunda nota: " << endl;
    cin >> n2;
    cout << "Coloque a terceira nota: " << endl;
    cin >> n3;

    m =  (n1 + n2 + n3) / 3;

    if (m >= 8) {
        cout << "Sua nota media sera: " << m << endl;
        cout << "Seu conceito sera: A";
    }else{
    if (m >= 5 && m < 8){
        cout << "Sua nota media sera: " << m << endl;
        cout << "Seu conceito sera: B";
    }else{
    if (m < 5){
        cout << "Sua nota media sera: " << m << endl;
        cout << "Seu conceito sera: C";
    }}}
    return 0;
}
