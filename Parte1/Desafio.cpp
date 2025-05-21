/*
Escrever um programa para gerar uma matriz de 4 x 5 números reais, multiplicar a primeira
coluna por qualquer outra da matriz e mostrar a soma dos produtos. O programa deve ser
decomposto em subprogramas e utilizar ponteiros para acessar os elementos da matriz.
*/
#include <iostream>
#include <vector>
#include <random>
#include <windows.h>
using namespace std;

// Gera número aleatório
int aleatorio(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(min, max);
    return dist(gen);
}

// Imprime matriz
void printMatriz(const vector<vector<int>> &matriz) {
    for(const auto &linha : matriz) {
        for(const auto &val : linha) {
            cout << val << "|";
        }
        cout << endl;
    }
}

// Extrai uma coluna da matriz
int* extraicoluna(const vector<vector<int>> &matriz, int col = 0) {
    int linhas = matriz.size();
    int *coluna = new int[linhas];

    for (int i = 0; i < linhas; i++) {
        coluna[i] = matriz[i][col];
    }
    return coluna;
}

int *produtoColunaMatriz(int *coluna, const vector<vector<int>> &matriz, int &coluna2){
    int *retorno = new int[matriz.size()];//Variavel de retorno, retorna uma lista com o produto da coluna com coluna2
    
    for (size_t i = 0; i < matriz.size(); i++)
    {
        retorno[i] = coluna[i]*matriz[i][coluna2];
    }
    
    return retorno;
}

int somalista(int *lista, int tam){
    int retorno = 0;
    for (size_t i = 0; i < tam; i++)
    {
        retorno += *(lista+i);
    }
    
    return retorno;
}

int main() {
    SetConsoleOutputCP(CP_UTF8); // permite acentos no Windows

    vector<vector<int>> matriz(4, vector<int>(5));
    int col = 0;

    // Preenche matriz com números aleatórios
    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 5; j++) {
            matriz[i][j] = aleatorio(1, 100);
        }
    }

    //Cria a variavel col zero que é a primeira coluna da matriz
    int *colzero = extraicoluna(matriz);

    //MENU (mostra a matriz e pergunta como qual coluna o ususario quer multiplicar)
    printMatriz(matriz);

    cout << endl << "Qual coluna vc quer multiplicar pela primeira: "; cin >> col;


    //Cria o produto das duas colunas e multiplica elas
    int *produto = produtoColunaMatriz(colzero, matriz, col);
    for (size_t i = 0; i < matriz.size(); i++)
    {
        cout << produto[i] << endl;
    }
    
    cout << "soma da lista dos produtos: " << somalista(produto, matriz.size());
    
    delete[] produto;
    delete[] colzero;
    return 0;
}