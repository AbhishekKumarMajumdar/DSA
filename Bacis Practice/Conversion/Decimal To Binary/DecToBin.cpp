#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    int i = 0;
    int result = 0;

    while (number > 0)
    {
        int modulo = number % 2;
        result = result + pow(10, i) * modulo;
        number /= 2;
        i++;
    }
    cout << result;

    return 0;
}