/*
## Desafio parte II:
É necessário armazenar a seguinte informação de uma pessoa: nome, idade, altura
e peso. Escrever uma função que leia os dados de uma pessoa, recebendo como
parâmetro um ponteiro e outra função que os visualize.
*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
//VARIAVEIS GLOBAIS
//Registro de aluno
struct aluno {
    string nome;
    int idade;
    float altura;
    float peso;
};

//FUNÇÕES
//Função que lê os dados dos alunos
void get_data(aluno *aluno){
    cout << "Digite o nome: ";
    getline(cin, aluno->nome);
    cout << "Digite a idade: ";
    cin >> aluno->idade;
    cout << "Digite a altura: ";
    cin >> aluno->altura;
    cout << "Digite o peso: ";
    cin >> aluno->peso;
}

//Função que mostra o dados de alunos
void print_data(aluno *aluno){
    cout << "Nome: " << aluno->nome << endl
         << "Idade: " << aluno->idade << endl
         << "Altura: " << aluno->altura << endl
         << "Peso: " << aluno->peso;
}

//Função prinicipal
int main(){
    system("chcp 65001 > nul");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //Variaveis
    aluno estudante;
    aluno *pont_aluno = &estudante;

    get_data(pont_aluno);
    cout << endl <<" -------------------------- "<< endl;
    print_data(pont_aluno);

    

getchar();
return 0;
}