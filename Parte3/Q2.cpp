/*
2. Desenvolva um programa que :
   1. Peça ao usuário quantos números deseja armazenar.
   1. Aloque dinamicamente por meio do operador new().

   1. Preencha toda a estrutura.
   1. Apresente o maior valor armazenado.
   1. Após o uso libere a memória por meio do operador delete().
*/
#include <iostream>
using namespace std;


//FUNÇÕES
//Mostra uma lista
void printlista(auto ptr[], int n){
    /*
    ptr = lista que deseja exibir
    n = quatidade de variaveis dentro da lista
    */
    for (size_t i = 0; i < n; i++)
    {   
        if (i == (n-1)){
            cout << ptr[i] << endl;
        }
        else{
            cout << ptr[i] << ", ";
        }      
    }   
}
//Mostra o maior valor de uma lista
int biggerfromList(auto lista[], int tam){
    int bigger = lista[0];
    for (size_t i = 0; i < tam; i++)
    {
        if (bigger < lista[i]){
            bigger = lista[i];
        }
    }
    return bigger;
}

//FUNÇÃO PRINCIPAL
int main(){
    int n;
    cout<<"Quantos numeros deseja armazenar: "; cin>>n;
    int *ptr = new int [n];

    for (size_t i = 0; i < n; i++)
    {
        cout << "Digite o " << i+1 << " numero: ";
        cin >> ptr[i];
    }

    cout << "Ponteiro dinamico: ";
    printlista(ptr, n);
    cout << "O maior numero digitado: "<< biggerfromList(ptr, n);;

delete[] ptr;
getchar();
return 0;
}