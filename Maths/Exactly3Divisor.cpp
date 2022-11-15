// Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N){
    int p = sqrt(N);
    for(int i=2;i<=p;i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}
int exactly3Divisors(int N)
{
    int s = sqrt(N);
    int cnt = 0;
    if(s<3){
        return s-1;
    }
    else{
        for(int i=2;i<=s;i++){
            if(isPrime(i)){
                cnt++;
            }
        }
        return cnt;
    }
}

int main(){
    int ans = exactly3Divisors(67);
    cout << ans << " numbers smallers than 67 have 3 divisors." << endl;
    return 0;
}