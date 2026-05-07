#include <iostream>

using namespace std;

int main()
{
    int x, z, s;
    cout << "Coloque um numero natural: ";
    cin >> x;
    z = 0;
    if (x > 0){
    while (x > s){
        s = z * (z + 1) * (z + 2);
        z++;
    }
    if (x == s){
        cout << "O seu numero e triangular.";
    }else{
        cout << "O seu numero nao e triangular.";
    }
    }else{
        cout << "Seu numero nao e natural.";
    }
    return 0;
}
