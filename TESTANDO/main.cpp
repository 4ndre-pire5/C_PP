#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <set>

using namespace std;

vector<int> sortearNumeros(unsigned int quantidade, unsigned int limite)
{
    vector<int> sorteados;
    set<int> numerosSorteados;

    // Sorteia 15 numeros sem repetição
    while (sorteados.size() < quantidade)
    {
        int num = rand() % limite + 1;
        if (numerosSorteados.find(num) == numerosSorteados.end())
        {
            sorteados.push_back(num);
            numerosSorteados.insert(num);
        }
        // Ordena o vetor em ordem crescente
        sort(sorteados.begin(), sorteados.end());
    }

    return sorteados;
}

int main()
{
    srand(time(0));

    int totalCartelas = 0;

    do
    {
        cout << "Digite o numero de cartelas (1 a 20): ";
        cin >> totalCartelas;
    } while (totalCartelas < 1 || totalCartelas > 20);

    vector<vector<vector<int>>> matrizes(totalCartelas, vector<vector<int>>(3, vector<int>(5)));

    char sortear;
    string msg = "Digite 's' para sortear os numeros\n";

    while (sortear != 's')
    {
        cout << msg;
        cin >> sortear;
    }

    for (int m = 0; m < totalCartelas; m++)
    {
        vector<int> numeros = sortearNumeros(15, 90);

        int k = 0;
        for (int j = 0; j < 5; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                matrizes[m][i][j] = numeros[k];
                k++;
            }
        }
    }

    // Exibindo as matrizes lado a lado com no máximo 5 por linha
    int matrizes_por_linha = 5;
    for (int linha_atual = 0; linha_atual < totalCartelas; linha_atual += matrizes_por_linha)
    {
        // Determinar quantas matrizes exibir nesta linha (5 ou o restante)
        int matrizes_nesta_linha = min(matrizes_por_linha, totalCartelas - linha_atual);

        // Exibir cada linha de cada matriz da linha atual
        for (int i = 0; i < 3; i++) // 3 linhas por matriz
        {
            for (int m = linha_atual; m < linha_atual + matrizes_nesta_linha; m++)
            {
                for (int j = 0; j < 5; j++) // 5 colunas por matriz
                {
                    cout << matrizes[m][i][j] << " ";
                }
                cout << "\t";  // Espaço entre as matrizes
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
