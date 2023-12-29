#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a natural number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "The number of inputs is even, and twice that is equal to : " << n * 2  << endl;
    }
    else
    {
        cout << "The number of inputs is odd and three times that number is equal to : " << n * 3 << endl;
    }

    return 0;
}
