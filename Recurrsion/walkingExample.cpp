#include <iostream>
using namespace std;

void Walking(int src, int des)
{
    cout << "Sourse is " << src << " and des  is " << des << endl;
    // base case
    if (src == des)
        return;

    // Processing
    src++;

    // Recursion call
    Walking(src, des);
}

int main()
{
    int src = 0, des = 10;
    cout << "Walking from source to destination \n\n"
         << endl;
    Walking(src, des);

    return 0;
}