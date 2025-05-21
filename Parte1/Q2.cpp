/*
2. Crie um programa que leia um número inteiro e imprima:
   1. O valor digitado.
   1.  O endereço da memória.
   1. O conteúdo da memória apontado pelo ponteiro.
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int valor;
    cout<<"Digite um valor inteiro: ";cin>>valor;

    int *pont_valor = &valor;
    cout << "Valor digitado: "<<valor;
    cout << endl;
    cout << "Endereco na memoria do Valor digitado: "<<pont_valor;
    cout << endl;
    cout << "Conteudo apontado pelo ponteiro Valor digitado: "<<*pont_valor;
    cout << endl;

getchar();
return 0;
}