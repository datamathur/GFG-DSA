// Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

#include<iostream>
#include<cmath>
using namespace std;

int posOfRightMostDiffBit(int m, int n)
{
    if(m==n){
        return -1;
    }
    else{
        int a = m ^ n;
        a = a & ~(a-1);
        a = log2(a)+1;
        return a;
    }
}

int main(){
    int ans1 = posOfRightMostDiffBit(52, 4);
    int ans2 = posOfRightMostDiffBit(9,9);
    cout << "The rightost diferent bit of 52 & 4 = " << ans1 <<endl;
    cout << "The rightost diferent bit of 9 & 9 = " << ans2 <<endl;
    return 0;
}