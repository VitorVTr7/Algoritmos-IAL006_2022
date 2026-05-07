#include <iostream>

using namespace std;

int positivos (int x){
if (x>0){
    return 1;
}else{
return 0;
}
}

int main(){
int x;
cout << "numero: ";
cin >> x;
if (positivos (x)){
    cout << "positivo" << endl;
}else{
    cout << "negativo" << endl;
}return 0;
}

