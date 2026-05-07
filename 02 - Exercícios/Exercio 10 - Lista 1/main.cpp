#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    float qa, qb, qc, ra, rb, rc;
    char x, a, b, c;
    cout << "Bem-vindo a lojinha do ze" << endl;
    cout << "Temos os seguintes produtos: " << endl;
    cout << "" << endl;
    cout << setw (11) << "PRODUTOS:";
    cout << setw (23) << "PRECOS:" << endl;
    cout << "a.";
    cout << setw (10) << "Banana (1 KG)";
    cout << setw (18) << "R$3.99" << endl;
    cout << "b.";
    cout << setw (10) << "Mortadela (500 g)";
    cout << setw (15) << "R$15.00" << endl;
    cout << "c.";
    cout << setw (10) << "Bepis (500 ml)";
    cout << setw (17) << "R$2.50" << endl;


    cout << "Qual produto voce deseja? (Escolha atraves das letras do lado do produto)" << endl;
    cin >> x;

    if (x == 'a'){
        cout << "Quantidade de banana: ";
        cin >> qa;
        ra = qa * 3.99;
        cout << "Mais algum produto? (s/n)" << endl;
        cin >> x;

        if (x == 's'){
            cout << "Qual produto voce deseja? (Escolha atraves das letras do lado do produto)" << endl;
            cin >> x;

            if (x == 'a'){
                cout << "erro fatal, tente de novo.";
                }else{
                if (x == 'b'){
                    cout << "Quantidade de mortadela: ";
                    cin >> qb;
                    rb = qb * 15;
                    cout << "Mais algum produto? (s/n)" << endl;
                    cin >> x;

                    if (x == 's'){
                        cout << "Qual produto voce deseja? (Escolha atraves das letras do lado do produto)" << endl;
                        cin >> x;
                        if (x == 'a'){
                        cout << "erro fatal, tente de novo.";
                        }else{
                        if (x == 'b'){
                        cout << "erro fatal, tente de novo.";
                        }else{
                        if (x == 'c'){
                        cout << "Quantidade de bepis: ";
                        cin >> qc;
                        rc = qc * 2.5;

                        cout << "PRODUTO";
                        cout << setw (16) << "QUANTIDADE";
                        cout << setw (22) << "PRECO INDIVIUDAL";
                        cout << setw (29) << "PRECO C/ AS QUANTIDADES" << endl;
                        cout << "Banana";
                        cout << setw(12) << qa << "x";
                        cout << setw(19) << "R$3.99";
                        cout << setw(20) << "R$" << ra << endl;
                        cout << "Mortadela";
                        cout << setw (9) << qb << "x";
                        cout << setw (20) << "R$15.00";
                        cout << setw (19) <<"R$" << rb << endl;
                        cout << "Bepis";
                        cout << setw (13) << qc << "x";
                        cout << setw (19) << "R$2.50";
                        cout << setw (20) << "R$" << rc << endl;
                    }
                    }

                }
            }

        }
                }
        }
    }

    //if (x == 'b'){
    //    cout << "Quantidade de mortadela: ";
     //   cin >> qb;
     //   rb = qb * 15;
    //}else{
   // if (x == 'c'){
       // cout << "Quantidade de bepis: ";
       // cin >> qc;
       // rc = qc * 2.5;
       // }else{
       //  if (x =! 'a', x =! 'b', x =! c){
       // cout << "Codigo errado, tente novamente.";
       // return 0;



    return 0;
}
