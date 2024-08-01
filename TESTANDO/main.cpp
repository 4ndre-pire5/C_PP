#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

vector<int> sortearNumeros(unsigned int quantidade, unsigned int limite)
{
    vector<int> sorteados;

    srand(time(0));

    // Sorteia 15 numeros sem repetição
    while (sorteados.size() < quantidade)
    {
        int num = rand() % limite + 1;
        if (find(sorteados.begin(), sorteados.end(), num) == sorteados.end())
        {
            sorteados.push_back(num);
        }
        // Ordena o vetor em ordem crescente
        sort(sorteados.begin(), sorteados.end());
    }

    return sorteados;
}

int main()
{
    vector<int> numeros;
    char sortear;

    string msg = "Digite 's' para sortear os numeros\n";

    cout << msg;
    cin >> sortear;

    if (sortear == 's')
    {
        numeros = sortearNumeros(15, 90);
    }
    else cout << msg;

    // Matriz 3x5 para armazenar os números
    int matriz[3][5];

    // Copiando os números para a matriz, preenchendo por colunas
    int k = 0;
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            matriz[i][j] = numeros[k];
            k++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}