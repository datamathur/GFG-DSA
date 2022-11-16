// Given N in Gray Code, find its binary equivalent. Return the decimal representation of the binary equivalent.

// Input: N = 4
// Output: 7
// Explanation:
// Given 4 representing gray code 110.
// Binary equivalent of gray code 110 is 100.
// Return 7 representing gray code 100.

#include<iostream>
using namespace std;

int grayToBinary(int n)
{
    int res = n;
    while(n>0){
        n = n>>1;
        res = res^n;
    }
    return res;
}

int main(){
    int ans = grayToBinary(4);
    cout << "The binary of gray code for 4 = " << ans << endl;
    return 0;
}