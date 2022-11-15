// Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series.

#include<bits/stdc++.h>
using namespace std;

double termOfGP(int A,int B,int N)
{
    double r = ((double) B) / ((double) A);
    return (A*pow(r, N-1));
}

int main(){
    double ans = termOfGP(2,4,3);
    cout << "the 3rd term of a GP whose first 2 terms are 2 & 4 = " << ans << endl;
    return 0;
}