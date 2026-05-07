#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, o, p;
    float r, s, x;
    cout << "Coloque um numero: ";
    cin >> x;
    r = 1;
    i = 1;
    o = 1;
    while (i <= 15){
    o++;
    s = pow (x, o);
    r += s/i;
    i++;
}
    cout << "O resultado sera " << r << ".";
    return 0;
}
