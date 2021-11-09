#include <iostream>
using namespace std;
int binarysearch(int a[],int start,int end,int key){
    if(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==key)
            return mid;
        
        if(a[mid]>key)
            return binarysearch(a,start,mid-1,key);
        
        if(a[mid]<key)
            return binarysearch(a,mid+1, end,key);
        
    }
     
    return -1;
}

int main(void) {
    
    int arr[]={1,3,5,7,9,11,24,36,57,66};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=36;
    

   int index = binarysearch (arr,0,n-1,key);
    // int value =
    if(index == -1)
      cout<< key <<" is not present in the array";
   else
      cout<< key <<" is present at index "<< index <<" in the array"; 
   
    return 0;
    
}
