#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
# include <algorithm>
using namespace std;

int main()
{
    string str = {"8 3 -5 42 -1 0 0 -9 4 7 4 -4"};

    stringstream strStream(str);

    vector<int> numbers(istream_iterator<int>(strStream), {});

    //vector<int>::iterator max;
    auto max = max_element(numbers.begin(), numbers.end());

    //vector<int>::iterator min;
    auto min = min_element(numbers.begin(), numbers.end());

    cout << *max << " " << *min << endl;

    return 0;
}