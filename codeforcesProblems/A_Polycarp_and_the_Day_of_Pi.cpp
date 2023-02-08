#include <bits/stdc++.h>
using namespace std;
#define pi "3141592653589793238462643383279502884197169399375105820974944592307816406286"
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        string str;
        cin>>str;
        int ans=0;
        for(int i=0;i<str.size();i++){
           if(str[i]==pi[i]){
                ans++;
           }
           else{
               break;
           }
        }

        cout<<ans<<endl;
    }
    
 
}