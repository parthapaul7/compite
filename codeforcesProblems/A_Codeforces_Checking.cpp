#include <bits/stdc++.h>
using namespace std;

void solve(char ch){
    string str = "codeforces";

        for(int i=0;i<str.size();i++){
            if(ch==str[i]){
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
        char ch;
        cin>>ch;

        solve(ch);

    }
    
 
}