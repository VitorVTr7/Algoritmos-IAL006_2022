/*
Leia uma variável de 100 elementos reais e verifique se existem elementos iguais a 64. 
Se existirem, escreva as posições em que estão armazenados. 
*/
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
