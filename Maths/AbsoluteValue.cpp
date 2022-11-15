// You are given an interger I, find the absolute value of the interger I.

#include<bits/stdc++.h>
using namespace std; 


int absolute(int I) {
// Your code goes here
if(I<0){
    I *= -1;
}
return I;
}

int main(){
    int i = absolute(-35);
    cout << "Absolute Value of -35 = " << i <<endl;
    return 0;
}