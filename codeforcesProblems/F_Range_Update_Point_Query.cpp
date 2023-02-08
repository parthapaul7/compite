#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

void solve(){
    int n, q;
    cin>>n>>q;

    vector<int> arr(n);
    unordered_set<int> s;
    unordered_map<int, int> mp;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] >= 10){
        s.insert(i);

        }
    }

    
    while(q--){
        int qType;
        cin>>qType;

        if(qType == 1 ){
            int l, r;
            cin>>l>>r;

            for(int i=l-1; i<r && !s.empty(); i++){
                if(mp.find(arr[i]) == mp.end()){
                    mp[arr[i]]=sumOfDigits(arr[i]);
                    // cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
                }
                arr[i] = mp[arr[i]];
                if(arr[i] < 10){
                    s.erase(i);
                }
            }
            // arr[l-1] = sumOfDigits(arr[l-1]);
            // arr[r-1] = sumOfDigits(arr[r-1]);
        }
        else{
            int idx;
            cin>>idx;
            cout<<arr[idx-1]<<endl;
        }
    }
}
 
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
 
}