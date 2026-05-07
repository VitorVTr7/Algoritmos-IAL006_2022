#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, m;
    cout << "Coloque a primeira nota: " << endl;
    cin >> n1;
    cout << "Coloque a segunda nota: " << endl;
    cin >> n2;
    cout << "Coloque a terceira nota: " << endl;
    cin >> n3;

    m =  (n1 + n2 + n3) / 3;

    if (m >= 8) {
        cout << "Sua nota media sera: " << m << endl;
        cout << "Seu conceito sera: A";
    }else{
    if (m >= 5 && m < 8){
        cout << "Sua nota media sera: " << m << endl;
        cout << "Seu conceito sera: B";
    }else{
    if (m < 5){
        cout << "Sua nota media sera: " << m << endl;
        cout << "Seu conceito sera: C";
    }}}
    return 0;
}
