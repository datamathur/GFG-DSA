#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

//Method 1 - Naive Methods
bool isPow1(int n){
    if(n==0){
        return true;
    }

    while(n != 1){
        if(n%2 != 0){
            return false;
        }
        n /=2;
    }
    return true;
}

//Method 2 - Brian Kerningam's Algo
bool isPow2(int n){
    if(n==0){
        return true;
    }
    return ((n & (n-1))==0);
}

bool isPowerof2(long long n){
    if(n==0){
        return false;
    }
    long long k = log2(n);
    long long l = pow(2,k);
    return l==n;
    
}

int main(){
    int n = 4;
	
	printf("%s", isPow2(n)? "true": "false");

    return 0;       
}