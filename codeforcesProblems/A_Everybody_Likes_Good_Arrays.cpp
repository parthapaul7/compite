#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
 
// take a position arg and shift the whole array to left
void shiftLeft(ll arr[],int n,int pos){
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
}
 
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        ll arr[100];
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
 
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
 
        int ans = 0;
 
        for(int i=0;i<n;i++){
            if(arr[i]%2 == 0){
                arr[i] = 0;
            }
            else if(arr[i]%2 == 1){
                arr[i] = 1;
            }

            // ll modOf1 = arr[i]%2;
            // ll modOf2 = arr[i+1]%2;
            // if(modOf1 == modOf2){
            //     arr[i] = arr[i]*arr[i+1];
            //     shiftLeft(arr,n,i+1);
            //     n--;
            //     i = -1;
            //     ans++;
            // }
        }

        for( int i=0;i<n-1; i++){
            if(arr[i] == arr[i+1]){
                ans++;
            }
        }
         
        cout<<ans<<endl;
 
    }
    
 
}