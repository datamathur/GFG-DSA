// Given a number N. Find the length of the longest consecutive 1s in its binary representation.

#include<iostream>
#include<algorithm>
using namespace std;

int maxConsecutiveOnes(int N)
{
    int cnt = 0;
    int maxcnt = 0;
    while(N>0){
        if(N%2!=0){
            cnt++;
            maxcnt = max(maxcnt,cnt);
        }
        else{
            cnt = 0;
        }
        N /= 2;
    }
    return maxcnt;
}

int main(){
    int ans = maxConsecutiveOnes(222);
    cout << "Maximum consequtive set bits in binary representation of 222 = " << ans <<endl;
    return 0;
}