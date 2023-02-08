#include <iostream>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int k,n;
        cin>>k>>n;
 
        int arr[40];
        arr[0]=1;
 
 
        for(int i=1;i<k;i++){
            int temp= arr[i-1]+i;
            int diff = arr[i-1]+ k - 1;
            if(diff<=n && temp<=n){
                arr[i]=temp;
            }
            else{
                arr[i]=arr[i-1]+1;
            }
        }
 
        for(int i=0;i<k;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
 
}   