// You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

#include<iostream>
using namespace std;

int countBitsFlip(int a, int b){
    
    int ans = a ^ b;
    int cnt = 0;
    while(ans>0){
        ans = ans & (ans-1);
        cnt ++;
    }
    return cnt;
    
}

int main(){
    int ans = countBitsFlip(10,20);
    cout << ans << " bits needs to be fliped in 10 to make if 20." << endl;
    return ans;
}