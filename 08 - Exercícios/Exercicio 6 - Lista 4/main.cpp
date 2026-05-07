#include <iostream>
#define X 30

using namespace std;

int main()
{
    int i;
    char x[X];

    for (i=0; i < X; i++){
        cout << "Coloque o caractere do x [" << i << "] ";
        cin >> x[i];
        switch (x[i]){
        case 'a':
            x[i] = '@';
            break;

        case 'e':
            x[i] = '@';
            break;

        case 'i':
            x[i] = '@';
            break;

        case 'o':
            x[i] = '@';
            break;

        case 'u':
            x[i] = '@';
            break;

        default:
            x[i] = x[i];
        }}

    for (i=0; i < X; i++){
        cout << "x [" << i << "]: " << x[i] << endl;
    }
    return 0;
}
