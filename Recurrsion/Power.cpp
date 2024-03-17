#include <iostream>
using namespace std;

int Power(int n)
{
    if (n == 1)
        return 2;
    return 2 * Power(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number to find the 2's power\n";
    cin >> n;
    cout << "Answer is : ";
    cout << Power(n);
    return 0;
}