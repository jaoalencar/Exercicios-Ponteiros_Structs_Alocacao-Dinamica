/*
1. Utilizando um ponteiro para acessar os campos do registro.
   1. Defina um registro Aluno com os campos nome e idade.
   1. Defina uma variável do tipo registro.
   1. Defina um ponteiro para este tipo de registro.
   1. Por meio do ponteiro atribua valores a cada campo deste registro.
*/

#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

struct aluno {
    char nome[50];
    int idade;
};

int main(){
    SetConsoleOutputCP(CP_UTF8);

    aluno Vitor;
    aluno *pont_aluno;

    pont_aluno = &Vitor;

    pont_aluno->idade = 15;
    strcpy(pont_aluno->nome, "Vitor");

    cout<<"Idade do Vitor: "<<Vitor.idade<<endl;
    cout<<"Nome do Vitor: "<<Vitor.nome;


getchar();
return 0;
}