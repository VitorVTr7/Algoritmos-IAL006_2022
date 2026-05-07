#include <iostream>
#define A 5000
using namespace std;

int main()
{
    int d1[A], d2[A], att, a, i;
    char r;
    cout << "Quantidade de alunos total: ";
    cin >> att;
    a = 1;
    for(i=0; i<att; i++){
        cout << "Aluno " << a << " esta cursado no D1? (Responder com S (SIM) ou N (NAO))" << endl;
        cin >> r;
        switch (r){
        case 'S':
            d1[i] = 1;
            break;

        case 'N':
            d1[i] = 0;
            break;

        case 's':
            d1[i] = 1;
            break;

        case 'n':
            d1[i] = 0;
            break;
        }
        a++;
        }
    a = 1;
    for(i=0; i<att; i++){
        cout << "Aluno " << a << " esta cursado no D2? (Responder com S (SIM) ou N (NAO))" << endl;
        cin >> r;
        switch (r){
        case 'S':
            d2[i] = 1;
            break;

        case 'N':
            d2[i] = 0;
            break;

        case 's':
            d2[i] = 1;
            break;

        case 'n':
            d2[i] = 0;
            break;
        }
        a++;
    }
    a = 1;
    for(i=0; i<att; i++){
        if (d1[i] == 1 && d2[i] == 1){
            cout << "Aluno " << a << " esta cursado em D1 e D2." << endl;
        }
        a++;
    }
    return 0;
}
