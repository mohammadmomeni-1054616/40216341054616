#include <iostream>
#include <string>
using namespace std;

string digit_to_word(int digit)
{
    switch (digit)
    {
    case 0:
        return "zero";
    case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6:
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    default:
        return "";
    }
}

string number_to_word(int n)
{
    if (n == 0)
    {
        return digit_to_word(n);
    }

    string word;
    while (n > 0)
    {
        int digit = n % 10;
        word = digit_to_word(digit) + " " + word;
        n /= 10;
    }

    return word;
}

int main()
{
    int n;
    cout << "Please enter a natural number : ";
    cin >> n;

    string word = number_to_word(n);
    cout << "Convert number " << n << " to the letter : " << word << endl;

    return 0;
}
