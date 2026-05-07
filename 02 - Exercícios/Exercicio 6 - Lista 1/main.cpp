/* 
Foram digitadas três linhas, onde cada uma das linhas 
contém o nome e a nota de um aluno. 
Escreva um programa que leia essas informações 
e monte uma tabela onde a primeira coluna 
é o nome e a segunda coluna é a nota. 
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x, y, z;
    string ac, bc, cc;
    cout << "Digite a primeira linha:" << endl;
    cout << "Nome do aluno: ";
    cin >> ac;
    cout << "Nota do aluno: ";
    cin >> x;
    cout << "Digite a segunda linha:" << endl;
    cout << "Nome do aluno: ";
    cin >> bc;
    cout << "Nota do aluno: ";
    cin >> y;
    cout << "Digite a terceira linha:" << endl;
    cout << "Nome do aluno: ";
    cin >> cc;
    cout << "Nota do aluno: ";
    cin >> z;

    cout << "" << endl;
    cout << setw(20) << "Nome";
    cout << setw(20) << "Nota" << endl;
    cout << "" << endl;
    cout << setw(20) << ac;
    cout << setw(20) << x << endl;
    cout << setw(20) << bc;
    cout << setw(20) << y << endl;
    cout << setw(20) << cc;
    cout << setw(20) << z << endl;
    cout << "" << endl;
    return 0;
}
