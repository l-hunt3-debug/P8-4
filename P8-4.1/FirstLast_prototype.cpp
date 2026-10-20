/*
* File: FirstLast_prototype.cpp
* Author: Liviah Hunt
* Date: 10/20/26
* 
* Description: Find the first digit, last digit, and number of digits in an integer.
*/

#include <iostream>
using namespace std;

// Function prototypes
int first_digit(int n);
int last_digit(int n);
int digits(int n);

int main()
{
    int n;

    cout << "Enter number or Q to quit: ";

    while (cin >> n)
    {
        cout << "First digit: " << first_digit(n);
        cout << " Last digit: " << last_digit(n);
        cout << " Number of digits: " << digits(n) << endl;

        cout << "Enter number or Q to quit: ";
    }

    return 0;
}

// Returns the first digit of the number
int first_digit(int n)
{
    if (n < 0)
        n = -n;

    while (n >= 10)
    {
        n = n / 10;
    }

    return n;
}

// Returns the last digit of the number
int last_digit(int n)
{
    return abs(n % 10);
}

// Returns the number of digits in the number
int digits(int n)
{
    if (n < 0)
        n = -n;

    int count = 1;

    while (n >= 10)
    {
        n = n / 10;
        count++;
    }

    return count;
}
