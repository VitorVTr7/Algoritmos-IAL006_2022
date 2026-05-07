#include <iostream>

using namespace std;

int somatorio (int x, int y) {
    int s, i;
    s = 0;
    for (i=x; i<=y; i++) {
        s = s + i;
    }
    return s;
}
int main(){
    int x, y, s;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    s = somatorio (x, y);
    cout << "Valores entre " << x << " ate " << y << " sera: " << s;
    return 0;
}
