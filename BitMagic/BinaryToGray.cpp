// You are given a decimal number N. You need to find the gray code of the number N and convert it into decimal.
// To see how it's done, refer here.

#include<iostream>
using namespace std;

int greyConverter(int n)
{
    return n^(n>>1);
}

int main(){
    int ans = greyConverter(7);
    cout << "The decimal of gray code of 7 = " << ans << endl;
    return 0;
}