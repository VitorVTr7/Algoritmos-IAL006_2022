#include <iostream>

using namespace std;

int main()
{
    float p, a, m;
    cout << "Peso(KG): " << endl;
    cin >> p;
    cout << "Altura(M): " << endl;
    cin >> a;

    m = p / (a * a);

    if (m < 26){
        cout << "Seu grau de obesidade e: Normal.";
    }else{
        if (m >= 26 && m < 30){
            cout << "Seu grau de obesidade e: Obeso.";
        }else{
            if (m >= 30){
                cout << "Seu grau de obesidade e: Obeso morbido.";
    }}}
    return 0;
}
