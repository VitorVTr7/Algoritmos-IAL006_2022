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
