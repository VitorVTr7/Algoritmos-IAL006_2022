#include <iostream>

using namespace std;

int main()
{
    int x, i, n1, n2, s;
    cout << "Coloque um numero: ";
    cin >> x;
    cout << "\n";
    n1 = 1;
    n2 = 1;

    if (x <= 2){
        cout << "Seu numero e invalido.\n";
        cout << "Motivo: o numero colocado eh menor ou igual a 2.";
        cout << "\n";
    }else{
        cout << "Sequencia de Fibonacci: (1  1 ";
        for (i = 1; i <= x; i++){
            s = n1 + n2;
            n1 = n2;
            n2 = s;
            cout << " " << s << " ";
        }
        cout << ")";
    }
    return 0;
}
