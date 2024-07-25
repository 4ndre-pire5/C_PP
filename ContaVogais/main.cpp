#include <iostream>
#include <string>

using namespace std;

int contaVogais(string str)
{
    int totalVogais = 0;
    const string vogais {"aeiouAEIOU"};

    for (unsigned int i = 0; i < str.length(); i++)
    {
        for (unsigned int j = 0; j < vogais.length(); j++)
        {
            if (str[i] == vogais[j])
            {
                totalVogais++;
            }
        }
    }
    return totalVogais;
}

int main()
{
    string str;

    cout << "Digite uma palavra: " << endl;
    cin >> str;
    int numVogais = contaVogais(str);

    cout << str << " tem " << numVogais << " vogais." << endl;

    return 0;
}