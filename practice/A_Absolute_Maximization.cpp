#include <bits/stdc++.h>
using namespace std;
 
int main(){

   int T; 
   cin>>T;
   while (T--){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int min = arr[0];
    int max = arr[0];

    for(int i=1;i<n;i++){
        max = max | arr[i];
        min = min & arr[i];
    }

    cout<<max-min<<endl;


   }
}