# include <iostream>
using namespace std;

//Method 1
void isSet1(int n, int k){
    if(n & (1<<(k-1)) != 0){
        cout << "SET";
    }
    else{
        cout << "NOT SET";
    }
}

//Method 2
void isSet2(int n, int k){
    if((n>>(k-1)) & 1 != 0){
        cout<<"SET";
    }
    else{
        cout<<"NOT SET";
    }
}

int main(){
    int n=5, k=1;
    isSet1(n,k);
    cout<<endl;
    isSet2(n,k);
    return 0;
}