#include <iostream>

using namespace std;

int main()
{
    float m, n1, n2, n3, n4;
    cout << "Coloque a nota de portugues: ";
    cin >> n1;
    cout << "Coloque a nota de matematica: ";
    cin >> n2;
    cout << "Coloque a nota de filosofia: ";
    cin >> n3;
    cout << "Coloque a nota de geografia: ";
    cin >> n4;

    m = (n1 + n2 + n3 + n4) / 4;

    if (m >= 6){
        cout << "" << endl;
        cout << "Media: " << m << endl;
        cout << "Aluno ficou acima da media.";
    }else{
    if (m < 6) {
        cout << "" << endl;
        cout << "Media: " << m << endl;
        cout << "Aluno reprovou.";
    }}

    return 0;
}
