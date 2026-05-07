/*
Deseja-se calcular a conta de consumo de energia elétrica de N consumidor. Para isso, 
escreva um programa que leia o código do consumidor,
o preço do KW e a quantidade de KW consumido. 
Através de uma função calcule o total a pagar e mostre o resultado. 

Total a pagar = preço * quantidade 
Total a pagar mínimo = R$11,20 
*/
#include <iostream>

using namespace std;

float verificacao(float tfv);

float soma(float pws, float qws);

void resultado (float f);

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

    resultado (soma (pw, qw));

    return 0;
}

float soma (float pws, float qws){
    float t;

    t = pws * qws;

    if(verificacao(t) == 1){
        return 11.20;
    }else{
        return t;
}}

float verificacao(float tfv){
    if (tfv <= 11.20){
        return 1;
    }else{
        return 0;
}}

void resultado (float f){
    cout << "Valor total: " << f << endl;
}
