#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    
    while (T--)
    {
        int n;
        cin>>n;
        string str;

        cin>>str;
        

        string ans = "";

        int ones = 0;
        
        if(str[0] == '1' ){
            ones++;
        }

        for(int i=1;i<n;i++){

            if(str[i] == '1'){
                ones++;
                if(ones%2 == 0){
                    ans.push_back('-');
                    // cout<<n<<endl;
                }
                else{
                    ans.push_back('+');
                }
            }
            else{
                ans.push_back('+');
            }
        }

        cout<<ans<<endl;

    }
    
 
}