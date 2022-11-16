// Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
// Note: If there is no set bit in the integer N, then return 0 from the function.  

#include <iostream>
#include<math.h>
using namespace std;

unsigned int getFirstSetBit(int n)
{
    int k;
    k = n & ~(n-1);
    unsigned int res = log2(k)+1;
    return res;
}

int main(){
    unsigned int ans = getFirstSetBit(18);
    cout << "First set bit of 18 is: " << ans << endl;
    return 0;
}