/*
Faça um programa que leia um valor N inteiro e positivo, 
calcule e mostre a série dada por: 

S = 1 + (1/1!) + (1/2!) + (1/3!) + ... + (1/N!)
*/
#include <iostream>

using namespace std;

int main()
{
    int x, y, i, o;
    float r, v;
    cout << "Coloque um numero inteiro e positivo: ";
    cin >> x;
    if (x > 0){
    v = 1;
    for (i = 1; i <= x; i++){
        r = 1;

        for (o = 1; o <= i; o++){
            r *= o;
        }
        v += 1/r;
    }
    cout << "Seu valor sera: " << v << endl;
    }else{
        cout << "Numero invalido.";
    }
    return 0;
}
