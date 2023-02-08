#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;

    pair<int,int> pos = {0,0};
    
    for(int i=0;i<str.size();i++){
        if(str[i]=='L'){
            pos.first--;
        }
        if(str[i]=='R'){
            pos.first++;
        }
        if(str[i]=='U'){
            pos.second++;
        }
        if(str[i]=='D'){
            pos.second--;
        }
        // cout<<pos.first<<" "<<pos.second <<" "<<str<<endl;
        if(pos.first==1 && pos.second==1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
       int n;
       cin>>n;
       solve(); 
    }

 
}