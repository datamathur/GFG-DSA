// Given a temperature in celsius C. You need to convert the given temperature to
// Fahrenheit.

#include<bits/stdc++.h>
using namespace std; 

double cToF(int C)
{
    //Your code here
    double f = (double) C;
    f = ((9*f)/5) + 32;
    return f;
}

int main(){
    double ferenhite = cToF(30);
    cout << "30C = " << ferenhite << "F" <<endl;
    return 0;
}