/*
Faça um programa que faça a média aritmética de um aluno, sabendo que ele tem 4 
matérias (português, matemática, filosofia e geografia.). No final do programa, demonstrar
a sua média aritmética e falar se o aluno ficou acima da média ou se ficou abaixo da 
média. Sabendo que para ficar acima da média, o aluno deverá ter média igual ou acima 
de 6, enquanto para ficar abaixo da média, o aluno deverá ter média abaixo de 6.
*/
#include <iostream>

using namespace std;

int main()
{
    float m, n1, n2, n3, n4;
    cout << "Coloque a nota de portugues: ";
    cin >> n1;
    cout << "Coloque a nota de matematica: ";
    cin >> n2;
    cout << "Coloque a nota de filosofia: ";
    cin >> n3;
    cout << "Coloque a nota de geografia: ";
    cin >> n4;

    m = (n1 + n2 + n3 + n4) / 4;

    if (m >= 6){
        cout << "" << endl;
        cout << "Media: " << m << endl;
        cout << "Aluno ficou acima da media.";
    }else{
    if (m < 6) {
        cout << "" << endl;
        cout << "Media: " << m << endl;
        cout << "Aluno reprovou.";
    }}

    return 0;
}
