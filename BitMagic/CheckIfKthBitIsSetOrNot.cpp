// Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. 
// Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.

# include <iostream>
using namespace std;

//Method 1
void isSet1(int n, int k){
    if(n & (1<<k) != 0){
        cout << "SET";
    }
    else{
        cout << "NOT SET";
    }
}

//Method 2
void isSet2(int n, int k){
    if((n>>k) & 1 != 0){
        cout<<"SET";
    }
    else{
        cout<<"NOT SET";
    }
}

// Implemented solution
bool checkKthBit(int n, int k)
{
    return (n & (1<<k));
}

int main(){
    int n=5, k=1;
    isSet1(n,k);
    cout<<endl;
    isSet2(n,k);
    return 0;
}