#include <iostream>
#define X 10

using namespace std;

int main()
{
    float soma;
    int i, x[X];

    soma = 0;
    for(i=0; i < X; i++){
        cout << "Coloque um elemento [" << i << "]: ";
        cin >> x[i];
        if (x[i] % 2 != 0){
            soma += x[i];
            cout << "soma: " << soma << endl;
        }}

    cout << "Seu valor sera: " << soma;
    return 0;
}
