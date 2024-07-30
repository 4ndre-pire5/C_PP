// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>

// using namespace std;

// vector<int> sortearNumeros(unsigned int quantidade, int limite)
// {
//     set<unsigned int> numerosSorteados;
//     vector<int> resultado;

//     srand(time(0));

//     while (numerosSorteados.size() < quantidade)
//     {
//         int numero = rand() % limite + 1;
//         numerosSorteados.insert(numero);
//     }

//     resultado.assign(numerosSorteados.begin(), numerosSorteados.end());

//     return resultado;
// }

// int main()
// {
//     vector<int> numeros = sortearNumeros(15, 90);

//     int array[3][5];
//     int index = 0;
//     for (int i = 0 ; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             array[i][j] = numeros[index++];
//         }
//     }

//     for (int i = 0 ; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "- - - - - - - - ";
//     cout << endl;
    
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Semente para a geração de números aleatórios
    srand(time(0));

    // Vetor para armazenar os números sorteados
    vector<int> numeros;

    // Sorteando 15 números únicos
    while (numeros.size() < 15) {
        int num = rand() % 90 + 1;
        if (find(numeros.begin(), numeros.end(), num) == numeros.end()) {
            numeros.push_back(num);
        }
        // Ordena o vetor em ordem crescente
        sort(numeros.begin(), numeros.end());
    }

    // Matriz 3x5 para armazenar os números
    int matriz[3][5];

    // Copiando os números para a matriz, preenchendo por colunas
    int k = 0;
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 3; i++) {
            matriz[i][j] = numeros[k];
            k++;
        }
    }

    // Imprimindo a matriz
    cout << "Matriz com os números sorteados e ordenados por coluna:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}