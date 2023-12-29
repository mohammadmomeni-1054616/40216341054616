#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a series of ascending numbers : ";

    int sum = 0;
    int prev = -1;
    while (true)
    {
        cin >> n;
        if (n < prev)
        {
            break;
        }
        sum += n;
        prev = n;
    }

    cout << "The sum of the entered numbers is equal to : " << sum << endl;

    return 0;
}
