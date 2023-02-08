#include <iostream>
using namespace std;

void solve(string str, int n){

        if(n%3 == 2){
            cout<<"NO"<<endl;
            return;
        }
        
        for(int i=1;i<n-1;i++){

            if(str[i] == str[i+1]){
                i+=2;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return ;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i;
        solve(str, n);
    }
 
}