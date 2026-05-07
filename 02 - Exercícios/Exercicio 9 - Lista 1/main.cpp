/*
Elabore um programa que sabendo as 
notas de média de provas (MP), trabalhos (MT) e exercícios (ME) 
de um aluno calcule a sua média final sendo:
MF = 0.7 * MP + 0.2 * MT + 0.1 * ME
*/
#include <iostream>

using namespace std;

int main()
{
    float mp, mt, me, mf;
    cout << "Coloque os dados a seguir, para que saia o resultado de sua media final: " << endl;
    cout << "Sua media nas provas: ";
    cin >> mp;
    cout << "Sua media nos trabalhos: ";
    cin >> mt;
    cout << "Sua media nos exercicios: ";
    cin >> me;

    mp = (mp * 0.7) + (mt * 0.2) + (me * 0.1);

    cout << "Sua media final sera: " << mp;

    return 0;
}
