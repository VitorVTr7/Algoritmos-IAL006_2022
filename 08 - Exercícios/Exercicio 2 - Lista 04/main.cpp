/*
Ler dois vetores, o A com 20 elementos e o B com 30 elementos. Construir um vetor C 
sendo este a junção dos outros dois vetores. Assim, C terá 50 elementos.
*/
#include <iostream>
#define X 20
#define Y 30
#define Z 50
using namespace std;

int main()
{
    float A[X], B[Y], C[Z];
    int i, j;
    for(i = 0; i < X; i++){
        cout << "A [" << i << "]: ";
        cin >> A[i];
    }
    for(i = 0; i < Y; i++){
        cout << "B [" << i << "]: ";
        cin >> B[i];
    }
    j = 20;
    for (i = 0; i < X; i++){
        cout << "C [" << i << "]: " << A[i] << endl;
        }
    for (i = 0; i < Y; i++){
        cout << "C [" << j << "]: " << B[i] << endl;
        j++;

    }
    return 0;
}
