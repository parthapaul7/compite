#include <bits/stdc++.h>
using namespace std;

 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n , arr[200000];
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int x = 0,x_max = 0;

        for(int i=0;i<n-1;i++){
            // cout<<arr[i]<<endl;
            if(arr[i] > arr[i+1]){

                int temp = (arr[i]+arr[i+1])%2;

                    // cout<<x<<endl;
                if(temp == 0){
                    x = (arr[i]+arr[i+1])/2;
                }
                else{
                    // cout<<x<<endl;
                    x = (arr[i]+arr[i+1])/2 +1;
                }

                if(x > x_max){
                    x_max=x;
                }
            }
        }

        for( int i=0;i<n;i++){
            if(arr[i] - x_max < 0){
                arr[i] = x_max-arr[i];
            }
            else{
                arr[i] = arr[i] - x_max;
            }
        }

        if(is_sorted(arr,arr+n)){
            cout<<x_max<<endl;
        }
        else{
          cout<<-1<<endl;
        }

        
    }
    
 
}