#include<iostream>
using namespace std;

// taylor series using recursion
// formula: e^x = 1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!
// taylorSeries(x,n) = taylorSeries(x,n-1) + P/F
// P = previousValue * x
// F = previousFactorial * n
/// @param x 
/// @param n 
/// @return 

double EfficientTaylorSeries(int x, int n){
    static int s=1;
    if(n==0)
        return s;
    else{
        s= 1+x/s*n;
        return EfficientTaylorSeries(x,n-1);
    }
}

double taylorSeries(int x, int n){
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else{
        r=taylorSeries(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
    int x=2,n=10;
    cout<<taylorSeries(x,n);
    cout<<EfficientTaylorSeries(x,n);
    return 0;
}