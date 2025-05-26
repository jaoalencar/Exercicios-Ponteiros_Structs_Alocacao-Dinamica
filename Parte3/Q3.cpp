/*
3. Desenvolva um programa que crie um registro Pessoa com nome(string/vetor de
caracteres) e cpf (inteiro).
   1. Use new() para alocar dinamicamente uma variável para cadastrar uma
pessoa.
   1. Leia e exiba os dados desta pessoa.
   1. Após o uso libere a memória por meio do operador delete().
*/

#include <iostream>
#include <string>
using namespace std;

struct Pessoa{
    string nome;
    long long cpf;
};

int main(){
    Pessoa *p = new Pessoa;
    cout << "Nome da pessoa: "; getline(cin, p->nome);
    cout << "CPF da pessoa: "; cin >> p->cpf;

    cout << p->nome << endl << p->cpf;

delete p;
getchar();
return 0;
}