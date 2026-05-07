#include <iostream>

using namespace std;

void nomecomple (char pn[100], char us[100]);

int main()
{
    char n[100], s[100];
    cout << "Coloque seu nome: ";
    cin >> n;
    cout << "Coloque seu sobrenome: ";
    cin >> s;
    nomecomple (n,s);
    return 0;
}

void nomecomple (char pn[100], char us[100]){
    cout << "Ola " << pn << " " << us << "!";
}
