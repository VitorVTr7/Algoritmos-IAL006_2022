/*
Faça uma rotina que receba dois números e calcule a soma, a subtração, a multiplicação e 
a divisão desses números. O cálculo só deve ser feito 
se o primeiro número for maior ou igual ao segundo, 
senão retorne um erro. Faça um programa para testar a rotina. 
*/
#include <iostream>

using namespace std;

int adicao(float aa, float ba);
int sub(float as, float bs);
int multi (float am, float bm);
float divi (float ad, float bd);
int main()
{
    float a, b;

    cout << "Coloque um numero: ";
    cin >> a;
    cout << "Coloque outro numero: ";
    cin >> b;
    if(a >= b){
        cout << "Adicao dos numero: " << adicao(a,b) << endl;
        cout << "Subtracao dos numero: " << sub(a,b) << endl;
        cout << "Multiplicacao dos numero: " << multi(a,b) << endl;
        cout << "Divisao dos numero: " << divi(a,b) << endl;
    }else{
        cout << "Erro, numeros invalidos." << endl;
}
    return 0;
}

int adicao(float aa, float ba){
    return aa + ba;
}

int sub(float as, float bs){
    return as - bs;
}

int multi (float am, float bm){
    return am * bm;
}

float divi (float ad, float bd){
    return ad / bd;
}
