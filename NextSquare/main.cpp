#include <iostream>
#include <cmath>

using namespace std;

unsigned long long int findNextSquare(unsigned long long int sq)
{
    unsigned long long int result = sqrt(sq);
    if (result * result == sq)
    {
        result++;
        result *= result;
        return result;
    }
    return -1;
}

int main()
{
    unsigned long long int value =  findNextSquare(15241383936);
    cout << value << endl;
    return 0;
}