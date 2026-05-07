/*
Dada uma matriz 10x3 com as notas de 10 alunos em 3 provas, faça um programa que 
mostre um relatório com o número do aluno (número da linha) e a prova em que cada aluno 
obteve menor nota. Ao final do relatório, 
mostre quantos alunos tiveram menor nota na P1, 
quantos alunos tiveram menor nota na P2 e quantos alunos tiveram menor nota na P3.
*/
#include <iostream>
#define X 10
#define Y 3

using namespace std;

int main(){
    float A[X][Y], p1, p2, p3, ng;
    int i, j;
    for(i = 0; i < X; i++){
        for(j = 0; j < Y; j++){
            cout << "A [ALUNO " << i + 1 << "] [PROVA " << j +1 << "]: ";
            cin >> A[i][j];
            while (A[i][j] < 0 || A[i][j] > 10){
                cout << "NOTA INVALIDA, tente novamente..." << endl;
                cout << "A [ALUNO " << i + 1 << "] [PROVA " << j +1 << "]: ";
                cin >> A[i][j];
            }
        }}
    for (i = 0; i < X; i++){
            ng = 10;
        for (j = 0; j < Y; j++){
            if(A[i][j] <= ng){
                ng = A[i][j];
            }
        }
        for (j = 0; j < Y; j++){
            if (ng == A[i][j] && j == 0){
                p1++;
                break;
            }else if (ng == A[i][j] && j == 1){
                p2++;
                break;
            }else if (ng == A[i][j] && j == 2){
                p3++;
                break;
            }}}

    cout << "Quantidade de alunos com menor nota na PROVA 1: " << p1 << endl;
    cout << "Quantidade de alunos com menor nota PROVA 2: " << p2 << endl;
    cout << "Quantidade de alunos com menor nota PROVA 3: " << p3 << endl;
    return 0;
}
