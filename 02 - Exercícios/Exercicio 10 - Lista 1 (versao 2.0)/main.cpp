/*
Suponha que se tenha uma lista com o nome e o preço de 3 produtos 
(não precisa ler essa tabela do teclado). 
O programa deve mostrar a tabela com o nome e o preço dos produtos para o usuário. 
O usuário deverá entrar com a quantidade de cada produto que ele quer. 
No final, o programa deverá gerar uma tabela com as seguintes colunas: 
Nome do produto, quantidade do produto, valor unitário do produto, 
subtotal do produto. Além disso, mostrar o total da compra. 
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int b, m, p;
    float tb, tm, tp, tt;
    cout << "Bem-vindo a lojinha do Ze." << endl;
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
    cout << "" << endl;

    b = 0;
    m = 0;
    p = 0;
    tb = 0;
    tm = 0;
    tp =0;

    cout << "Escolha a quantidade de BANANA (Colocar 0 (Zero) se nao querer o produto): ";
    cin >> b;
    cout << "Escolha a quantidade de MORTADELA (Colocar 0 (Zero) se nao querer o produto): ";
    cin >> m;
    cout << "Escolha a quantidade de Bepis (Colocar 0 (Zero) se nao querer o produto): ";
    cin >> p;
    cout << "" << endl;

     if (b == 0 && m == 0 && p == 0){
        cout << "NENHUM PRODUTO FOI SELECIONADO"<< endl;
        cout << "Finalizando programa." << endl;
        cout << "Tenha um otimo dia.";
    }else{
    cout << "PRODUTO";
    cout << setw (16) << "QUANTIDADE";
    cout << setw (22) << "PRECO INDIVIUDAL";
    cout << setw (29) << "PRECO C/ AS QUANTIDADES" << endl;

    if (b != 0){
        tb = b * 3.99;
        cout << "Banana";
        cout << setw(12) << b << "x";
        cout << setw(19) << "R$3.99";
        cout << setw(21) << "R$" << tb << endl;
    }
    if (m != 0){
        tm = m * 15;
        cout << "Mortadela";
        cout << setw (9) << m << "x";
        cout << setw (20) << "R$15.00";
        cout << setw (20) <<"R$" << tm << endl;
    }
    if (p != 0){
        tp = p * 2.5;
        cout << "Bepis";
        cout << setw (13) << p << "x";
        cout << setw (19) << "R$2.50";
        cout << setw (21) << "R$" << tp << endl;
    }

    if (b == 0 && m == 0 && p == 0){
        cout << "NENHUM PRODUTO FOI SELECIONADO"<< endl;
        cout << "Finalizando programa." << endl;
        cout << "Tenha um otimo dia.";
    }
    tt = tb + tm + tp;
    cout << "--------------------------------------------------------------------------\n";
    cout << "TOTAL: R$" << tt;
    }


    return 0;
}
