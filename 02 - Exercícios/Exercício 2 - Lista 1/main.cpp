#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Coloque um numero inteiro e positivo: " << endl;
    cin >> x;
     if (x >= 0){
        x = x * 2;
        cout << "O seu numero sera " << x <<"." << endl;
     } else {
     cout << "Seu numero nao e positivos." << endl;
     }
     return 0;
}
