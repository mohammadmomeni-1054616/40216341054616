#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a natural number : ";
    cin >> n;

    double s = 0.0;
    double factorial = 1.0;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        s += 1.0 / factorial;
    }

    cout << "The value of 'S' is equal to : " << s << endl;

    return 0;
}
