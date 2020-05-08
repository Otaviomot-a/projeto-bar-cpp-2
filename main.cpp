#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sexo;
    int cervejas, refri, espetos;
    double consumo, couvert, ingresso, total;

// PARTE 1: LEITURA DE DADOS

    cout << "Sexo: "; cin >> sexo;
    cout << "Quantidade de cervejas: "; cin >> cervejas;
    cout << "Quantidade de refrigerantes: "; cin >> refri;
    cout << "Quantidade de espetinhos: "; cin >> espetos;

// CALCULOS

   if (sexo == "F"){
        ingresso = 8.0;
   }
   else {
        ingresso = 10.0;
   }

        consumo = cervejas * 5.0 + refri * 3.0 + espetos * 7.0;

    if(consumo > 30.0){
        couvert = 0.0;
    }
    else {
        couvert = 4.0;
    }
    total = ingresso + consumo + couvert;

// MOSTRAR RELATORIO

    cout << fixed << setprecision(2);
    cout << endl << "RELATORIO:" << endl;
    cout << "Consumo = R$ " << consumo << endl;
    if (couvert == 0){
        cout << "Isento de Couvert" << endl;
    } else{
    cout << "couvert = R$" << couvert << endl;
    }
     cout << "Ingresso = R$ " << ingresso << endl;
     cout << "Valor a pagar = R$ " << total << endl;


}
