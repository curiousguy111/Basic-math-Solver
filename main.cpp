#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int option;
    int number;
    int number1;
    int result;

    cout <<"1-Factorization-factoring\n 2-Addition\n 3-subtraction\n 4-multiplication\n 5-division\n ";
    cout <<"Enter your option: ";
    cin >>option;

    if(option == 1)
    {
            int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: " << endl;
    for(i = 1; i <= n; ++i)
    {
        if(n % i == 0)
            cout << i << endl;
    }
}

if (option == 2)
{
    cout <<"Please enter a number: ";
    cin >>number;

    cout <<"Enter another number: ";
    cin >>number1;

    result = number + number1;

    cout << "Result is: " <<result;

}

if (option == 3)
{
    cout <<"Please enter a number: ";
    cin >>number;

    cout <<"Enter another number: ";
    cin >>number1;

    result = number - number1;

    cout << "Result is: " <<result;

}

if (option == 4)
{
    cout <<"Please enter a number: ";
    cin >>number;

    cout <<"Enter another number: ";
    cin >>number1;

    result = number * number1;

    cout << "Result is: " <<result;

}

if (option == 5)
{
    cout <<"Please enter a number: ";
    cin >>number;

    cout <<"Enter another number: ";
    cin >>number1;

    result = number / number1;

    cout << "Result is: " <<result;

}

return 0;
  }
