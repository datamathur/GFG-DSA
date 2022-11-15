#include <iostream>
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

int main(){
    int n = 4;
	
	printf("%s", isPow2(n)? "true": "false");

    return 0;       
}