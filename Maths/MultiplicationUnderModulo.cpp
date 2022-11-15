// You are given two numbers a and b. You need to find the multiplication of a and b under modulo M (M as 10^9+7).

#include<bits/stdc++.h>
using namespace std;

int multiplicationUnderModulo(long long a,long long b)
{
    long long mod = pow(10,9) + 7;
    a = a%mod;
    b = b%mod;
    long long c = a*b;
    return c%mod;
    //your code here
}

int main(){
    int ans = multiplicationUnderModulo(9223372036854775807,9223372036854775807);
    cout << "The product [9223372036854775807 x 9223372036854775807] under modulo = " << ans <<endl;
    return 0;
}