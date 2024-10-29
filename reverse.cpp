#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[]={2,3,4,5,6};
    int n=5;
    int i=0;
    int j=n-1;
    
    // recommended.
    // while(i<j){
    //  swap(arr[i],arr[j]);
    //  i++;
    //  j--;
    // }
    
    

    
    // using for loop not recommended
    // for(int i=0,j=n-1;i<n,j>i;++i,j--){
    //     swap(arr[i],arr[j]);
    // }
    for(int i=0;i<n;++i){
        cout<<arr[i];
    }
    
    
    
}
