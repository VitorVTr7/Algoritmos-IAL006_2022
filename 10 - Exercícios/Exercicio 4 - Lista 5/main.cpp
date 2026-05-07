#include <iostream>

using namespace std;

int dia (int dd);
int mes (int mm, int dm);
int ano (int aa);
int fin (int df, int mf, int af);

int main()
{
    int d, m, a;
    d = 32;
    m = 13;
    while (d > 31 || m > 13 || d <= 0 || m <= 0){
    cout << "DIA: ";
    cin >> d;
    cout << "MES: ";
    cin >> m;
    if(d > 31 || m > 13 || d <= 0 || m <= 0 ){
        cout << "DIA OU MES INEXISTENTE. Tente de novo..." << endl;
    }}
    cout << "ANO: ";
    cin >> a;

    cout << dia(d) << endl;
    cout << mes(m, dia(d)) << endl;
    cout << fin(dia(d), mes(m, dia(d)),a)<< endl;



    return 0;
}

int dia (int dd){
    if(dd == 31){
        return 1;
    }else{
        return dd + 1;
}}

int mes (int mm, int dm){
    if (mm == 12 && dm == 1){
        return 1;
    }else if(dm == 1){
        return mm + 1;
}}

int fin (int df, int mf, int af){
    if(mf == 1 && df == 1){
        return af + 1;
    }else{
        return af;
}}
