#include <bits/stdc++.h>
using namespace std;


int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        if(arr[0] == arr[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<arr[n-1]<<" ";
            for(int i=0;i<n-1;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    
 
}