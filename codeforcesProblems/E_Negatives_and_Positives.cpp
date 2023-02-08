#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll findSum(ll arr[], ll n){
    ll sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        ll n;
        cin>>n;
        ll arr[200000];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }

        
        ll noOfNegatives = 0;
        for(ll i=0;i<n;i++){
            if(arr[i]<0){
                noOfNegatives++;
            }
        }

        for(ll i=0;i<n;i++){
            if(arr[i]<0){
                arr[i] = -arr[i];
            }
        }

        if(noOfNegatives%2 == 0){
            cout<<findSum(arr,n)<<endl;
        }else{
            ll min_num = INT_MAX;
            for(ll i=0;i<n;i++){
               min_num = min(min_num,arr[i]);
            }
            cout<<findSum(arr,n) - 2*min_num<<endl;
        }

    }
    
 
}