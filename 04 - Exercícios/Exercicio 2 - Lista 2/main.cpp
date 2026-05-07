// Escreva um algoritmo que leia dois números e exiba o maior deles. 
#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Coloque um numero: " << endl;
    cin >> x;
    cout << "Coloque outro numero: " << endl;
    cin >> y;

    if (x > y){
        cout << "seu numero e " << x << "." << endl;
    }else{
        cout << "seu numero e " << y << "." << endl;

    }
    return 0;
}
