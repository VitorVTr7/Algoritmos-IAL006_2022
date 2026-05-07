/*
Fazer um programa que possua uma rotina que leia uma entrada do usuário e faça a 
validação da entrada de dados S/s ou N/n. 
Só permita a saída da rotina se o usuário digitou S/s ou N/n. 
Faça um programa para testar sua rotina. A rotina deverá ter o cabeçalho a seguir.

void validaEntrada(char *ent); 
*/
#include <iostream>

using namespace std;

void validaEntrada(char*ent) {
    char aux;
    cin >> aux;
    while (aux != 's' && aux != 'n'){
        cin >> aux;
    }
    *ent = aux;
}

int main()
{
    char e;
    cout << "Entrada (s/n): ";
    validaEntrada (&e);
    cout << "Entrada valida: " << e << endl;
    return 0;
}
