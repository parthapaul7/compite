#include <bits/stdc++.h>
using namespace std;

int main(){
   int T; 
   cin>>T;
   while (T--)
   {
    int n; 
    string str;
    cin>>n>>str;
    deque<char> dq;

    if(str.size() == 1){
        cout<<1<<endl;
        continue;
    }

    for(int i=0; i<n; i++){
        dq.push_back(str[i]);
    }

    while(dq.size() > 1 && dq.front() != dq.back()) {
        dq.pop_front();
        dq.pop_back();
    }

    cout<<dq.size()<<endl;
   }
   
 
}