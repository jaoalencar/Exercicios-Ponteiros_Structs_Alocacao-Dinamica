/*
1. Utilize o operador new() para alocar um bloco com 5 números inteiros.
   1. Preencha este bloco com valores inteiros.
   1. Mostre os dados preenchidos.
   1. Após o uso libere a memória por meio do operador delete().
*/

#include <iostream>
using namespace std;

int main(){
    int *ptr = new int (4);

    for (size_t i=0; i<4; i++){
        cout << "Valor "<< i+1 << " : ";
        cin >> ptr[i];
    }
    
    for (size_t i=0; i<4; i++){
        cout << "Valor "<< i+1 << " : ";
        cout << ptr[i];
    }

delete ptr;
getchar();
return 0;
}