#include <iostream>
using namespace std;

//Method 1 - Naive Method
int findOdd1(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count % 2 != 0)
            return arr[i];
        
    }
    return -1;
}

//Method 2 - Efficient Method
int findOdd2(int arr[], int n)
{
    int res = 0;
    
    for(int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    
    return res;
}

int main() {
	
	int arr[]= {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;
	
    cout<<findOdd1(arr, n)<<"\n";
    cout<<findOdd2(arr, n)<<"\n";
    
    return 0;
}