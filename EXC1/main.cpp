#include <iostream>

using namespace std;

int main()
{
    int num1, num2, operacao, resultado;

    cout << "Digite dois numeros: " << endl;
    cin >> num1;
    cin >> num2;

    cout << "Digite a operacao desejada: " << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;
    cin >> operacao;

    switch (operacao)
    {
    case 1:
        resultado = num1 + num2;
        cout << "A soma de " << num1 << " + " << num2 << " = " << resultado << endl;
        break;

    case 2:
        resultado = num1 - num2;
        cout << "A subtracao de " << num1 << " - " << num2 << " = " << resultado << endl;
        break;

    case 3:
        resultado = num1 * num2;
        cout << "A multiplicacao de " << num1 << " * " << num2 << " = " << resultado << endl;
        break;

    case 4:
        resultado = num1 / num2;
        cout << "A divisao de " << num1 << " / " << num2 << " = " << resultado << endl;
        break;

    default:
        cout << "Operacao invalida !" << endl;
    }

    return 0;
}