#include <iostream>
using namespace std;
 
int arraysortedornot(int ar[],int n){
    if(n==1||n==0){
        return 1;
    }
    if(ar[n-1] < ar[n-2]){
        return 0;
    }
      return arraysortedornot(ar,n-1);
     

}

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    if(arraysortedornot(a,n)){
            cout<<"sorted"<<endl;
    }
    else{
        cout<<"notsorted"<<endl;
    }
    return 0;
    
      
    
}
     

