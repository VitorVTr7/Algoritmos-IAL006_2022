#include <iostream>

#define x 10

using namespace std;

int main()
{
    int i, v[x];
    for (i = 0; i < x; i++){
        cout << "V [" << i << "]: ";
        cin >> v[i];
        }
    for (i=0; i < x; i++){
        if (v[i] == 64){
            cout << "posicao = " << i << endl;
        }
    }
    return 0;
}
