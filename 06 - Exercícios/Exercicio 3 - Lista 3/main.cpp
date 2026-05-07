#include <iostream>

using namespace std;

int main()
{
    int x, xs;
    x = 0;
    xs = 0;
    while(x <= 500){
        if (x % 2 != 0){
        xs = x + xs;
        x++;
        }else{
        x++;
    }}
    cout << "A soma sera " << xs << endl;
    return 0;
}
