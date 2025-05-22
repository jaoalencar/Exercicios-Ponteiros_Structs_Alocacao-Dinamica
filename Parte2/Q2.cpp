/*
2. Modifique o exercício anterior para receber os dados de 3 alunos (Vetor de registros)
e fazer toda a manipulação dos registros por meio de um ponteiro.
   1. Preencher todos os registros
   1. Mostrar o conteúdo.
*/

#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

struct aluno {
    char nome[50];
    int idade;
};

const int qnt=3;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    
    aluno estudantes[qnt];
    aluno *pont_estudantes = estudantes;

    for (size_t i = 0; i < qnt; i++)
    {
        cout << "Digite o nome do estudante " << i+1 << " :";
        fflush(stdin);
        fgets((pont_estudantes+i)->nome, 50, stdin);

        cout << "Digite a idade do estudante " << i+1 << " :";
        cin >> (pont_estudantes+i)->idade;
    }
    
    for (size_t i = 0; i < qnt; i++)
    {
        cout << "Nome do estudante "<< i+1 <<" :"<< estudantes[i].nome 
        <<", Idade do estudante"<< i+1 <<" :" << estudantes[i].idade << endl;
    }
}