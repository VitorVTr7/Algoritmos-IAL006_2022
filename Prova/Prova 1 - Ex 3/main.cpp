#include <iostream>

using namespace std;

int main()
{
    int l;
    char lr, n [40];
    cout << "Coloque o seu nome: " ;
    cin >> n;

    l = 0;

    while (l < 3){
        l = 0;
        cout << "4 + 4 = 8" << endl;
        cout << "" << endl;
        cout << "Essa conta e verdadeiro ou falso?" << endl;
        cout << "a) V" << endl;
        cout << "b) F" << endl;
        cout << "";
        cin >> lr;

        switch (lr){

        case 'a':

            l = l + 1;
            break;

        case 'b':

            l = l - 1;
            break;
        }


        cout << "" << endl;
        cout << "2 + 2 = 3" << endl;
        cout << "" << endl;
        cout << "Essa conta e verdadeiro ou falso?" << endl;
        cout << "a) V" << endl;
        cout << "b) F" << endl;
        cout << "";
        cin >> lr;

        switch (lr){

        case 'a':

            l = l - 1;
            break;

        case 'b':

            l = l + 1;
            break;
        }

        cout << "" << endl;
        cout << "1 + 1 = 2" << endl;
        cout << "" << endl;
        cout << "Essa conta e verdadeiro ou falso?" << endl;
        cout << "a) V" << endl;
        cout << "b) F" << endl;
        cout << "";
        cin >> lr;

        switch (lr){

        case 'a':

            l = l + 1;
            break;

        case 'b':

            l = l - 1;
            break;

        }
        cout << "Tente de novo, voce consegue!" << endl;
        cout << "" << endl;

    }
    cout << "Parabens " << n << " voce conseguiu acertar todas.";
    return 0;
}
