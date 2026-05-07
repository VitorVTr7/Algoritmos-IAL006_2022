#include <iostream>

using namespace std;

int main()
{
    float ft, fh, fa, ct, ch, ca;
    int a;
    fh = 1.5;
    ch = 1.1;
    a = 0;

    while (fh > ch){
        fh = fh + 0.2;
        ch = ch + 0.3;
        a++;
    }
    cout << "Precisa de " << a << " anos para Ciclano ser maior que Fulano.";
    return 0;
}
