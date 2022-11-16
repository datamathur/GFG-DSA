// Given a number N. The task is to check whether it is sparse or not. 
// A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.

#include<iostream>
using namespace std;

bool isSparse(int n)
{
    return ((n&(n>>1)) ? false : true);
}

int main(){
    bool ans = isSparse(2);
    cout << "Is 2 sparse? " << ans << endl;
    return 0;
}