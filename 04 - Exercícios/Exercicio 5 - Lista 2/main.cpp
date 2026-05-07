/*
Um determinado clube deseja aumentar o salário de seus jogadores. 
O reajuste deve obedecer a seguinte tabela:
SALÁRIO ATUAL (R$) 				AUMENTO 
0,00 a 1.000,00 				20% 
1.000,01 a 5.000,00 			10% 
acima de 5.000,00 				0% 

Escrever um programa que leia o nome e o salário atual de um jogador, 
e exiba o nome, o salário atual e o salário reajustado. 
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    float si, sn, st;
    string n;
    cout << "Qual seria o nome do jogador: " << endl;
    cin >> n;
    cout << "Qual seria o salario atual desse jogador: " << endl;
    cin >> si;

    if (si < 1000){
        sn = si * 0.2;
        st = si + sn;
        cout << "Jogador: " << n << "." << endl;
        cout << "Salario atual: " << si << endl;
        cout << "Salario novo: " << st<< endl;
    }else{
    if (si >= 1000.01 && si < 5000) {
        sn = si * 0.1;
        st = si + sn;
        cout << "Jogador: " << n << "." << endl;
        cout << "Salario atual: " << si << endl;
        cout << "Salario novo: " << st << endl;
    }else{
    if (si > 5000){
        st = si;
        cout << "Jogador: " << n << "." << endl;
        cout << "Salario atual: " << si << endl;
        cout << "Salario novo: " << st << endl;
    }
    }}

    return 0;
}
