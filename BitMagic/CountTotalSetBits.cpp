// You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

#include<iostream>
#include<cmath>
using namespace std;

// Method 1
int countSetBits1(int n)
{
    // Your logic here
    n++;
    int count=0;
    
    //Counting set bits from 1 to n.
    for( int x=2 ; x/2<n ; x=x*2 )
    {
        //Total count of pairs of 0s and 1s.
        int quotient = n/x;
        //quotient gives the complete count of pairs of 1s.
        //Multiplying it with the (current power of 2)/2 will 
        //give the count of 1s in the current bit.
        count += quotient * x / 2;
        
        int remainder = n%x;
        //If the count of pairs is odd then we add the remaining 1s 
        //which could not be grouped together. 
        if(remainder > x/2)
            count += remainder - x/2;
    }
    
    //returning count of set bits.
    return count;
}

// Method 2
int countSetBits2(int n)
{
    int imax = log2(n)+1;
    int p1 = 1;
    int p2 = 2;
    int cnt = 0;
    int r;
    for (int i=0;i<imax;i++){
        cnt += ((n/p2)*p1);
        if(((n%p2)-p1+1)>0){
            cnt += ((n%p2)-p1+1);
        }
        p1 *=2;
        p2 *=2;
    }
    return cnt;
}
