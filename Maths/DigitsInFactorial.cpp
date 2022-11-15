// Given an integer N. Find the number of digits that appear in its factorial. 
// Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.

#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N)
{
    double sum = 0;
    while(N>0){
        sum += log10(N);
        N--;
    }
    
    return (int)(sum + 1);
    // code here
}

int main(){
    int d = digitsInFactorial(120);
    cout << "Number of digits in 120! = " << d << endl;
    return 0;
}