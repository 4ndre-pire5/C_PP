#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> sortearNumeros(unsigned int quantidade, int limite)
{
    set<unsigned int> numerosSorteados;
    vector<int> resultado;

    srand(time(0));

    while (numerosSorteados.size() < quantidade)
    {
        int numero = rand() % limite + 1;
        numerosSorteados.insert(numero);
    }

    resultado.assign(numerosSorteados.begin(), numerosSorteados.end());

    return resultado;
}

int main()
{
    vector<int> numeros = sortearNumeros(15, 90);

    int array[3][5];
    int index = 0;
    for (int i = 0 ; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = numeros[index++];
        }
    }

    for (int i = 0 ; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "- - - - - - - - ";
    cout << endl;
    
    return 0;
}