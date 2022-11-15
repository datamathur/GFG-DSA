#include <iostream>
using namespace std;

//Method 1 - O(bit-size)
int countSet1(int n){
    int res = 0;
    while(n>0){
        if(n%2!=0){
            res++;
        }
        n = n/2;
    }
    return res;
}

//Method 2 - Brian Kerningam's Algorithm - O(set-bits)
int countSet2(int n){
    int res = 0;
    while(n>0){
        n = (n & (n-1));
        res++;
    }
    return res;
}

//Method 3 - The Look up table method - O(1)
int table[256];

void initialize() {
    table[0] = 0;
    for(int i =0;i<256;i++){
        table[i] = (i&1) + table[i/2];
    }
}

int countSet3(int n){
    return table[n & 0xff] + table[(n>>8) & 0xff] + table[(n>>16) & 0xff] + table[(n>>24) & 0xff];
}

int main(){
    int n = 5,k1,k2,k3; //Expected output = 2
    k1 = countSet1(n);
    k2 = countSet2(n);
    initialize();
    k3 = countSet3(n);
    cout << k1 <<"\n"<< k2 <<"\n"<< k3 <<"\n";
    return 0;
}