#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
using namespace std;

//QUES: find out if an expression has redundant paranthesis 
bool redundant(string str){
    stack<int> a;
    for(int i=0;i<str.length();i++){
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i]== '/'){
            a.push(str[i]);
        }
        else if(str[i] == '('){
            a.push(str[i]);
        }
        else if(str[i] == ')'){
            if(a.top() == '('){
                return true;
            }
            while(a.top() != '(' && a.top() != ')'){
                if(a.top() == '('){
                }
                a.pop();
            }
            a.pop();
        }
    }

    return false;

}

// QUES: stock span problem with stack approach

vector<int> stockSpan(vector<int> prob){
    vector<int> ans;
    stack<pair<int,int>> st;
    ans.push_back(1);
    st.push({prob[0],1});

    for(int i=1;i<prob.size();i++){
        int count =1;
        while(st.top().first<=prob[i]){
            count += st.top().second;
            st.pop();
        }
        st.push({prob[i],count});
        ans.push_back(st.top().second);
    }

    return ans;
}

// QUES: The Three sum problem with two pointers
//! first you need the sort the array

int sum(vector<int> prob,int res){
    int ans;
    int* left;int* right;
    for(int j=0;j<prob.size();j++){
        left = &prob[0];
        right = &prob[prob.size()-1];
        int first = prob[j];

        for(int i=0;i<prob.size();i++){
            int sum = *left + *right;
            if(sum<res-first){
                left++;
            }
            else if(sum>res-first){
                right--;
            }
            else if(sum == res-first){
                cout<<"nums are "<<prob[j]<<" "<<*left<<" "<<*right<<endl;
                return 1;
            }
        }
    }
    cout<<"sum not found"<<endl;
    return 0;
}

// QUES: Maximum consecative ones 
int maxConsecative(vector<int> prob,int k){
    int ans=0;
    int left =0;int right=0;
    int zeros=0;
    for(right=0;right<prob.size();right++){
        if(prob[right] == 0){
            zeros++;
                while(zeros > k){
                    if(prob[left] == 0){
                        zeros--;
                    }
                    left++;
                }
            }
            ans = max(ans,right-left+1);
        }
    return ans;
}

//QUES: longest substring without repeating character (dict ??)  

int longestSubstring(string str){

} 

int main(){
    string s;
    cin>>s;

    // bool ans = redundant(s);
    // cout<<ans<<endl;

    // stock span problem array 
    // vector<int> prob = {100,80,60,70,60,75,85};
    // vector<int> stockAns= stockSpan(prob);
    // for(auto i: stockAns){
    //     cout<<i<<" ";
    // }
    // vector<int> prob = {-1,2,5,6,7,8,10};
    // int ans = sum(prob,18);
    vector<int> prob = {1,0,0,0,1,1,0,0,0,1,1,0};
    int ans = maxConsecative(prob,3);
    cout<<ans<<endl;
}