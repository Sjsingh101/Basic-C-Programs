#include <iostream>
using namespace std;
 
   int main()
   {
    int i,j,arr[100],temp,n;
    
    cout<<"Enter array size: ";                     //input number of elements
    cin>>n;
    
    cout<<"\nEnter array elements: ";
    
    for(i=0; i<n; i++){    
        cin>>arr[i];                                //input elements from user
    }
    
    for(i=1;i<n;i++){
        for(j=i; j>0 && arr[j-1]>arr[j]; j--){
            temp = arr[j-1];                        //swapping 
            arr[j-1] = arr[j];
            arr[j] = temp;
        }
    }
    
    cout<<"\nSorted Array: ";
    
    for(i=0;i<n;i++){                          
        cout<<arr[i]<<" ";
    }
    return 0;
    }
