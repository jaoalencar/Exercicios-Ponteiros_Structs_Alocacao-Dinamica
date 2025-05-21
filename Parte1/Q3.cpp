/*
3. Crie um programa que declare um vetor de inteiros com 5 posições e utilizando um
ponteiro faça:

   1. Preencha o vetor.
   1. Mostre os dados armazenados.
   1. Calcule a média dos dados armazenados.
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int vetor[5], media=0;

    int *pont_vetor = vetor;
    for (size_t i = 0; i < 5; i++)
    {
        int aux;
        cout << "Digite o "<<i+1<<" valor: ";
        cin>>aux;
        *(pont_vetor+i) = aux;
    }

    for (const auto &i: vetor){
        cout << i <<endl;
        media += i;
    }
    
    cout<<"\n Media: "<< media/5;

getchar();
return 0;
}