#include <bits/stdc++.h>
using namespace std;

string reverse(string str, int pos){
    if(str.size() == 0){
        return "";
    }

    return reverse(str.substr(1, str.size()-1), pos+1) + str[0];
}

bool checkPalindrome(string str, int pos){

    if(str.size() == 0 || str.size() == 1){
        return true;
    }

    if(str[0] != str[str.size()-1]){
        return false;
    }

    return checkPalindrome(str.substr(1,str.size()-2), pos++);
}

int* makeSorted(int &arr, int size){
    //base case 
    if(size == 0 || size == 1){
        return &arr;
    }

    //recursive case
    if(arr >  *(&arr+1)){
        swap(arr,*(&arr+1));
        return makeSorted(*(&arr+1),size-1);
    }
    else{
        return makeSorted(*(&arr+1),size-1);
    }
}

vector<vector<int>> findPower(vector<int> arr, int start,int end, vector<vector<int>> ans){
     if(arr.size() == start){
        ans.push_back({arr[0]});
        return ans;
     }

    //  if(end != -1){
    //     if(arr.size() == 1){
    //         ans.push_back({arr[0],end});
    //         return ans;
    //     }
    //     return findPower(arr,start+1,end,ans); 
    //  }

     findPower(arr,start+1,end,ans);
     findPower(arr,start+1,arr[start],ans);

     return ans;
}
 
int main(){
 
    string str = "abcdcb";
    cout<<reverse(str,0)<<endl;
    cout<<checkPalindrome(str,0)<<endl;

    //
    int n= 5;
    int arr[n] = {1,4,2,3,5};
    vector<int> arr1 = {1,4,2,3,5};
    vector<vector<int>> ans;
    makeSorted(arr[0],n);
    for(auto i: arr){
        cout<<i<<endl;
    }

    auto ans1 = findPower(arr1,0,-1,ans);

    for(auto i: ans1){
        for(auto j: i){
            cout<<j<<" "<<endl;
        }
        cout<<endl;
    }

}