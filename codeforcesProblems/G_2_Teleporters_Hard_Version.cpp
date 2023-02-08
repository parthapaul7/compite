#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n,c;
    cin>>n>>c;
    priority_queue<int, vector<int> ,greater<int>> pq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(min(x+i+1, x+n-i));
    }
    int ans = 0;
    int temp = 0;

    while(!pq.empty()){
        int x = pq.top();
            // cout<<x<<" ";
        c = c - x;
        if( c >= 0 ){
            ans++;
            pq.pop();
        }
        else{
            break;
        }
    }

    return ans;
}
 
int main(){
    int T;
    cin>>T;
    while(T--){
        cout<<solve()<<endl;
    }
 
}