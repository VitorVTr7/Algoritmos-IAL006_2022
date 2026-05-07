/*
Faça uma função que receba três números inteiros: a, b e c, onde a é maior que 1. A 
função deve somar todos os inteiros entre b e c que sejam divisíveis por a 
(inclusive b e c) e retorne o resultado para a função principal. 
*/
#include <iostream>

using namespace std;

int adicao (int aa, int ab, int ac);

int main()
{
    int a, b, c;
    a = 0;
    while(a < 2){
    cout << "Coloque um numero a: ";
    cin >> a;
    if (a < 2){
    cout << "Número tem que ser maior que 1." << endl;
    }}
    cout << "Coloque um numero b: ";
    cin >> b;
    cout << "Coloque um numero c: ";
    cin >> c;


    cout << "Seu resultado sera: " << adicao (a, b, c);

    return 0;
}

int adicao (int aa, int ab, int ac){
    int i, s;
    s = 0;
    for(i=ab; i< ac; i++){
        if(i%aa != 0){
            cout << i << "Invalido" << endl;
        }else{
            s+=i;
            cout << "s: " << s << endl;
        }
        return s;
}}
