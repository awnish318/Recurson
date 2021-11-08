#include <iostream>
using namespace std;

int reverse(int a[],int start,int end){
    int temp;

    if(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

          reverse(a,start+1,end-1);
    }
  
    return 0;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,0,n-1);
    
    for (int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
    
}
