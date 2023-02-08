#include <bits/stdc++.h>
using namespace std;

void solve(string str, int n ){
    string vowels = "aeiou"; 
    int count =0;

    for(int i=0;i<n;i++){
        int loop = 0;
        for(int j=0;j<5;j++){
            if(str[i] == vowels[j]){
                count=0;
                break;
            }
            loop++;
        }

        if(loop == 5){
            count++;
        }

        if(count >= 4 ){
            cout<<"NO"<<endl;
            return;
        }  
    }

    cout<<"YES"<<endl;



}
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        string str;
        cin >> n >> str;


        solve(str,n);
       

    }
    
 
}