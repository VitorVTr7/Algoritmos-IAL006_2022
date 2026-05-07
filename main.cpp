#include <iostream>

using namespace std;

int main()
{
    float x, y, z, px, py, pz, md;
    cout << "Calculo da media" << endl;
    cout << "" << endl;
    cout << "Digite a primeira nota: " << endl;
    cin >> x;
    cout << "Digite a segunda nota: " << endl;
    cin >> y;
    cout << "Digite a terceira nota: " << endl;
    cin >> z;
    cout << "Digite o peso da primeira nota: " << endl;
    cin >> px;
    cout << "Digite o peso da segunda nota: " << endl;
    cin >> py;
    cout << "Digite o peso da terceira nota: " << endl;
    cin >> pz;

    md = ((x * px) + (y * py) + (z * pz)) / (px + py + pz);

    cout << "Sua media sera: " << md << endl;
    return 0;
}
