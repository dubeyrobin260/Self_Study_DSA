#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fun(int n) {
    static int x = 0;
    if (n > 0){
    x++;
    return fun(n - 1) + x;
    }
    return 0;
}

int naturalSum(int n) {
    if (n == 0)
        return 0;
    return naturalSum(n - 1) + n;
}

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}
 
int efficientPower(int base, int exp) {
    if (exp == 0)
        return 1;
    int halfPower = efficientPower(base, exp / 2);
    if (exp % 2 == 0)
        return efficientPower((base *base), exp/2);
    else
        return base * efficientPower((base *base), (exp-1)/2);
}

int main()
{   
    //cout << "Factorial of 5: " << factorial(5) << endl;
    //cout << "Fibonacci of 5: " << fibonacci(5) << endl;
    cout << "fun of 5: " << fun(5) << endl;
    cout << "Natural sum of 5: " << naturalSum(5) << endl;
    cout << "Power of 2^5: " << power(2, 5) << endl;
    cout << "Efficient Power of 2^5: " << efficientPower(2, 5) << endl;
    return 0;
}