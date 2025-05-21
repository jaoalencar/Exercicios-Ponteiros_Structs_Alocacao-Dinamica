/*
1. Trocar valores de variáveis por meio de ponteiros.
   1.  Crie um programa que declare duas variáveis inteiras e use um ponteiro para trocar seus valores.
   1. Faça o mesmo para duas variáveis do tipo float e char.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    float float_a = 3.5;
    float float_b = 2.1;

    char char_a = 'w';
    char char_b = 'z';

    cout << "Inicio do codigo: \n";
    cout << "a: " << a <<endl;
    cout << "b: " << b<<endl<<"----------"<<endl;

    cout << "float_a: " << float_a <<endl;
    cout << "float_b: " << float_b<<endl<<"----------"<<endl;

    cout << "char_a: " << char_a <<endl;
    cout << "char_b: " << char_b<<endl<<"----------"<<endl;

    int aux;
    int *pont_a = &a;
    int *pont_b = &b;

    float aux_float;
    float *pont_float_a = &float_a;
    float *pont_float_b = &float_b;

    char aux_char;
    char *pont_char_a = &char_a;
    char *pont_char_b = &char_b;
    
    aux = *pont_a;
    *pont_a = *pont_b;
    *pont_b = aux;

    aux_float = *pont_float_a;
    *pont_float_a = *pont_float_b;
    *pont_float_b = aux_float;

    aux_char = *pont_char_a;
    *pont_char_a = *pont_char_b;
    *pont_char_b = aux_char;

    cout<<"Pos troca por ponteiro: "<<endl;
    cout << "a: " << a <<endl;
    cout << "b: " << b<<endl<<"----------"<<endl;

    cout << "float_a: " << float_a <<endl;
    cout << "float_b: " << float_b<<endl<<"----------"<<endl;

    cout << "char_a: " << char_a <<endl;
    cout << "char_b: " << char_b<<endl<<"----------"<<endl;


getchar();
return 0;
}