// WAP to check given number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % 2 == 0)
        { // non-prime
           bool isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "prime number\n";
    }
    else
    {
        cout << "non-prime number\n";
    }

    cout << endl;
    return 0;
}