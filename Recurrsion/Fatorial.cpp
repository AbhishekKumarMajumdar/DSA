#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 1)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    cout << "Enter the Number to find the Factorial : \n";
    int n;
    cin >> n;

    cout << "Answer is :";
    cout << Factorial(n);

    return 0;
}