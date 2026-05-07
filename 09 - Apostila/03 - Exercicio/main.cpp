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
