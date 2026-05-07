// Dados 3 números inteiros, apresente esses números em ordem crescente. 
#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Coloque o primeiro numero: " << endl;
    cin >> x;
    cout << "Coloque o segundo numero: " << endl;
    cin >> y;
    cout << "Coloque o terceiro numero: " << endl;
    cin >> z;

        //x, y, z
    if (x > y && y > z && z < x) {
        cout << z << ", " << y << ", " << x << "." << endl;
        //x, z, y
    }else{
        if (x > y && y < z && z < x) {
        cout << y << ", " << z << ", " << x << "." << endl;
        //y, x, z
    }else{
        if (x < y && y > z && z < x){
        cout << z << ", " << x << ", " << y << "." << endl;
        //y, z, x
    }else{
        if (x < y && y > z && z > x) {
        cout << x << ", " << z << ", " << y << "." << endl;
        //z, y, x
    }else{
        if (x < y && y < x && z > x) {
        cout << x << ", " << y << ", " << z << "." << endl;
        //z, x, y
    }else{
        if (x > y && y < z && z > x) {
        cout << y << ", " << x << ", " << z << "." << endl;
    }}}}}}
    return 0;
}
