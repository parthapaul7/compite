#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int T;
    cin>>T;

    while(T--){
        int n;
        cin>>n;

        int ans=0;

        for(int i=1;i<=n;i++){
            int digit = log10(i);
            int power = (int) (pow(10,digit) + 0.5);
            int isSafe = i%power;

            // cout<<digit<<isSafe<<endl;

            if(isSafe == 0){
                ans++;
            }
        }

        cout<<ans<<endl;
        
    }
 
}