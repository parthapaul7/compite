#include <bits/stdc++.h>
using namespace std;

// all odd
bool oddSolve(int n, int arr[], vector<int> &v){
    int ones = 0;
    for(int i=0;i<n;i++){
            if(arr[i] == 1){
                ones++;
                v.push_back(i);

            }
            if(ones == 3){
                return true;
            }
       }
    v.clear();
    return false;
}

bool evenSolve(int n, int arr[], vector<int> &v){
    int zeros = 0, odd = 0;
    for(int i=0;i<n;i++){
            if(arr[i] == 0){
                zeros++;
                if(zeros <= 2){
                    v.push_back(i);
                }

            }
            else{
                odd++;
                if(odd <= 1){
                    v.push_back(i);
                }
            }

            if(zeros >= 2 && odd >= 1){
                return true;
            }
       }
    v.clear();
    return false;
}
 
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        int arr[300];
        vector<int> v;

        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        

       for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
       } 
       int zeros =0,ones=0;

       if(oddSolve(n,arr,v)){
            cout<<"YES"<<endl;
            for(int i=0;i<3;i++){
                cout<<v[i]+1<<" ";
            }
            cout<<endl;
        }
        else if(evenSolve(n,arr,v)){
            cout<<"YES"<<endl;
            for(int i=0;i<3;i++){
                cout<<v[i]+1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       

    }
 
}