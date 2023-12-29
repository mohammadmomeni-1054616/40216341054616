#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a natural number : ";
    cin >> n;

    int reversed_number = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    cout << "The inverse of the input number is equal to : " << reversed_number << endl;

    return 0;
}
