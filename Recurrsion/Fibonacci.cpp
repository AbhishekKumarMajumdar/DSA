#include <iostream>
using namespace std;

int Fib(int n)
{
    // Base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursion
    int ans = Fib(n - 1) + Fib(n - 2);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << Fib(n);
    return 0;
}