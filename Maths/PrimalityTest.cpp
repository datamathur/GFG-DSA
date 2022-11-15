// A prime number is a number which is only divisible by 1 and itself.
// Given number N check if it is prime or not.

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N)
{
    int p = sqrt(N);
    for(int i=2;i<=p;i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    bool ans = isPrime(37);
    cout << "37 is a prime number: " << ans << endl;
    return 0;
}