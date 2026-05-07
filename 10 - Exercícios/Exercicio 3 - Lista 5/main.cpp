/*
Faça um procedimento que receba as três notas de um aluno como parâmetros e uma 
letra. Se a letra for A o procedimento calcula a média aritmética das notas do aluno, 
se for P calcula a média ponderada com pesos 5, 3 e 2 respectivamente. 
A média calculada deve ser devolvida ao programa principal para ser mostrada. 
*/
#include <iostream>

using namespace std;

float arit (float aa, float ba, float ca);
float pond (float ap, float bp, float kp);
int main()
{
    float a, b, c;
    char e;
    a = -1;
    b = -1;
    c = -1;
    while (a < 0 || b < 0 || c < 0){
    cout << "Coloque a primeira nota: ";
    cin >> a;
    cout << "Coloque a segunda nota: ";
    cin >> b;
    cout << "Coloque a terceira nota: ";
    cin >> c;
    if (a < 0 || b < 0 || c < 0){
        cout << "ACESSO NEGADO, PRESENCA DE NUMERO NEGATIVO. Tente novamente." << endl;
    }}
    cout << "Escolhe a letra desejada (A = Aritmetica; P = Ponderada): ";
    cin >> e;
    switch (e){
    case 'A':
        cout << "Media Aritmetica: " << arit (a,b,c);
        break;

    case 'P':
        cout << "Media Ponderada: " << pond (a,b,c);
        break;

    case 'a':
        cout << "Media Aritmetica: " << arit (a,b,c);
        break;

    case 'p':
        cout << "Media Ponderada: " << pond (a,b,c);
        break;

    default:
        cout << "Letra errada, fechando programa...";

    }
    return 0;
}

float arit (float aa, float ba, float ca){
    return (aa + ba + ca) / 3;
}

float pond (float ap, float bp, float kp){
    return ((ap*5) + (bp*3) + (kp*2)) / (5+3+2);
}

