/*
Leia uma variável de 50 elementos do tipo caractere e verifique se existem elementos 
iguais a um determinado caractere fornecido pelo usuário.
Se existirem escreva as posições em que estão armazenados. 
*/
#include <iostream>
#define X 50

using namespace std;

int main()
{
    char A[X];
    int i, j;
    for(i = 0; i < X; i++){
        cout << "A [" << i << "]: ";
        cin >> A[i];
    }
    for(i = 0; i < X; i++){
        for(j = 0; j < X; j++)
        if(i == j){
                }else{
                    if (A[i] == A[j])
            cout << "Repeticao em: " << i << " e " << j << endl;
        }
    }
    return 0;
}
