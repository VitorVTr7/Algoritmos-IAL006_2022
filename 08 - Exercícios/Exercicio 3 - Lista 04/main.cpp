#include <iostream>
#include <math.h>
#define X 20

using namespace std;

int main()
{
    float A[X], SI, SF, SR;
    int i, j;
    for(i = 0; i < X; i++){
        cout << "A [" << i << "]: ";
        cin >> A[i];
    }
    j = 19;
    for(i = 0; i < 10; i++){
        SI = A[i] - A[j];
        SR = pow(SI, 2);
        SF += SR;
        j--;
    }
    cout << "Soma final: " << SF;
    return 0;
}
