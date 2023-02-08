#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n,k ,arr[100]={0};
        cin>>n>>k;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 

        for(int i=0;i<n;i++){
            k-=arr[i];

            if(k>=0){
                cout<<1;
            }
            else{
                cout<<0;
                k+=arr[i];
            }
            
        }
        
        cout<<endl;

    }
    
 
}