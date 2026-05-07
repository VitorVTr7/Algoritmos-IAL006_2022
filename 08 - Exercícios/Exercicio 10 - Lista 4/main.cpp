#include <iostream>
#define X 3
#define Y 9

using namespace std;

int main()
{
    int i, j, m;
    float a[X][X], b[X][X], c[X][X];
    for(i=0; i<X; i++){
        for (j=0; j<X; j++){
            cout << "A [" << i << "][" << j <<"]: ";
            cin >> a[i][j];
        }}

    for(i=0; i<X; i++){
        for (j=0; j<X; j++){
            cout << "B [" << i << "][" << j <<"]: ";
            cin >> b[i][j];
        }}
    for(i=0; i<X; i++){
        for(j=0; j<X; j++){
        for(m=0; m<X; m++){
                c[i][j] += a[i][m] * b[m][j];
        }}}

        for(i=0; i<X; i++){
        for(j=0; j<X; j++){
                cout << "C [" << i << "] [" << j << "]: " << c[i][j] << endl;
        }}
    return 0;
}
