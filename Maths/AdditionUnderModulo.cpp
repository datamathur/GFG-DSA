// Given two numbers a and b, find the sum of a and b. Since the sum can be very large, find the sum modulo 10^9+7.

#include<bits/stdc++.h>
using namespace std;

long long sumUnderModulo(long long a,long long b)
{
    long long m = pow(10,9) + 7;
    a = a%m;
    b = b%m;
    long long sum = a+b;
    sum = sum%m;
    return sum;
}

int main() {
    long long ans = sumUnderModulo(9223372036854775807,9223372036854775807);
    cout << "The sum [9223372036854775807 + 9223372036854775807] under modulo = " << ans <<endl;
    return 0;
}
