#include <iostream>

#define n 5
#define m 3
#define a 15

using namespace std;

int main(){
    int c, l, i, f;
    float A[n][m], B [n][m], C [n][m];
    c = 0;
    l = 0;
    for (i = 0; i < a; i++){
        cout << "A[" << l << "] [" << c << "]";
        cin >> A[l][c];
        c++;
        if (c > 2){
            c = 0;
            l++;
        }}

    c = 0;
    l = 0;
    for (i = 0; i < a; i++){
        cout << "B[" << l << "] [" << c << "]";
        cin >> B [l][c];
        c++;
        if (c > 2){
            c = 0;
            l++;
        }}
    c = 0;
    l = 0;
    for (l = 0; i < n; l++){
        for (c = 0; i < m; c++){
        C [l][c]= A [l][c] + B [l][c];
        }}

    for (l = 0; i < n; l++){
        for (c = 0; i < m; c++){
            cout << C [l] [c];
        }}


    return 0;
}
