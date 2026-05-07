#include <iostream>
#include <math.h>

using namespace std;

float potencia (float xa, float xb);

int main()
{
    float x, y;
    cout << "Coloque o numero da base: ";
    cin >> x;
    cout << "Coloque o numero do expoente: ";
    cin >> y;

    cout << "Resultado: " << potencia(x,y);
    return 0;
}

float potencia (float xa, float xb){
    return pow(xa,xb);
}

