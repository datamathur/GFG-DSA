#include <iostream>
using namespace std;

//Method 1 - Naive Method O(n^2)
void oddAppearing1(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count % 2 != 0)
            cout<<arr[i]<<" ";
        
    }
    
}

//Method 2 - Efficient - O(n)
void oddAppearing2(int arr[], int n)
{
    
        int xors = 0, res1 = 0, res2 = 0; 
        
        for (int i = 0; i < n; i++) 
        xors = xors ^ arr[i]; 
  
   
        int sn = xors & (~(xors - 1)); 
  
    
        for (int i = 0; i < n; i++) 
        { 
            if ((arr[i] & sn) != 0) 
                res1 = res1 ^ arr[i]; 
            else
                res2 = res2 ^ arr[i]; 
        } 
        
        
        cout <<  res1 << " " << res2;
}

int main() {
	
	int arr[]= {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
	
    oddAppearing1(arr, n);
    cout<<"\n";
    oddAppearing2(arr, n);
    
    return 0;
}