/*
## Desafio parte III:
    Escrever um programa que leia um número determinado de inteiros (1.000 como máximo)
    do terminal e os visualize na mesma ordem e com a condição de que se escreva somente
    uma vez cada inteiro. Se o inteiro já foi impresso, não deve ser visualizado novamente. Por
    exemplo, se os números seguintes são lidos do terminal 55, 78,25, 55, 24,3 e 7 o programa
    deve visualizar o seguinte: 55,78,25,24,3 e 7. Deve-se trabalhar com ponteiros para tratar
    com o array no qual foram armazenados os números.
*/
#include <iostream>
using namespace std;

void printlista(int ptr[], int n){
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

bool isRepeated(int lista[], int tam, int procurado){
    for (size_t i = 0; i < tam; i++)
    {
        if (lista[i] == procurado)
        {
            return true;
        }
    }
    return false;
}

int main(){
    int tam = 0;//tamanho da lista
    cout << "Quantos numero deseja escrever (1000 maximo): "; cin >> tam;
    int *numeros = new int [tam];//lista de numeros
    int posicao=0;//posicao que o numero digitado sera iserido

    for (size_t i = 0; i < tam; i++)
    {
        int aux;
        cout << "Digite o " << i+1 << " numero: ";
        cin >> aux;
        if (isRepeated(numeros, posicao, aux)){
            continue;
        }else{
            numeros[posicao] = aux;
            posicao++;
        }
    }
    
    printlista(numeros, posicao);

delete[] numeros;
getchar();
return 0;
}