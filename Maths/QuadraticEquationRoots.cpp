// Given a quadratic equation in the form ax2 + bx + c. Find its roots.
// Note: Return the maximum root followed by the minimum root.

#include<bits/stdc++.h>
using namespace std; 


vector<int> quadraticRoots(int a, int b, int c) {
    // code here
    double D = (b*b - 4*a*c);
    vector<int> v;
    if(D<0){
        v.push_back(-1);
    }
    else{
        D = sqrt(D);
        double r1 = (floor((-b+D)/(2.0*a)));
        double r2 = (floor((-b-D)/(2.0*a)));
        v.push_back(max(r1,r2));
        v.push_back(min(r1,r2));
    }
    return v;
}

int main(){
    vector<int> v = quadraticRoots(1,-2,1);
    cout << v[0] << endl;
    if(v.size()>1){
        cout << v[1] <<endl;
    }
    cout << "Programm ended" << endl;
    return 0;
}