// Given a positive integer N. The task is to find factorial of N.

#include<bits/stdc++.h>
using namespace std;

long long factorial(int N) {
    if(N>1){
        return N*factorial(N-1);
    }
    else{
        return 1;
    }
}

int main(){
    long long f = factorial(15);
    cout << "15! = " << f << endl;
    return 0;
}