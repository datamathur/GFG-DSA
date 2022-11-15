// Given two integers ‘a’ and ‘m’. The task is to find the smallest modular multiplicative inverse of ‘a’ under modulo ‘m’.

#include<bits/stdc++.h>
using namespace std;

int modInverse(int a, int m)
{
    for (int x=1;x<m;x++){
        if(((a%m) * (x%m))% m == 1){
            return x;
        }
    }
    return -1;
}

int main(){
    int ans = modInverse(3, 11);
    cout << "The multiplicative inverse of 3 under the modulo of 11 = " << ans << endl;
    return 0;
}