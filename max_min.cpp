// Max and minimum element of array 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[]={4,2,4,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    
    int min=arr[0];
    
    for(int i=0;i<size;++i){
        if(arr[i]<min){
            min=arr[i];
            
        }
        else{}
    }
    
    cout<<min;
 //int max=arr[0];
 //for(int i=0;i<size;++i){
 //       if(arr[i]>max){
 //           max=arr[i];
            
 //       }
 //       else{}
 //   }
    
 //   cout<<max;
    
    
   
    
    
}

//@cbisam
