#include <iostream>

using namespace std;

int main()
{
    float x, r, t;
    int i, d;
    cout << "Coloque um numero: " << endl;
    cin >> x;
    d = 1;
    for (i = 1; i <= 20; i++)
    {
    r = x / d;
    t += r;
    d++;
    }
    cout << "O resultado sera: " << t << endl;


    return 0;
}
