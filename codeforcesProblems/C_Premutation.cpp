#include <bits/stdc++.h>
using namespace std;

vector<int> reconstructPermutation(vector<vector<int>> sequences) {
    vector<int> permutation(sequences.size() + 1);
    vector<bool> used(sequences.size() + 1);

    for (int i = 0; i < sequences.size(); i++) {
        for (int j = 0; j < sequences[i].size(); j++) {
            if (!used[sequences[i][j]]) {
                permutation[i] = sequences[i][j];
                used[sequences[i][j]] = true;
                break;
            }
        }
    }

    // Find the missing element in the permutation
    for (int i = 1; i <= sequences.size(); i++) {
        if (!used[i]) {
            permutation[sequences.size()] = i;
            break;
        }
    }
    return permutation;
}

void ansPush(vector<int> &ans, int n, int arr[][100], int j){

    for(int i=j ; i<n; i++){
        ans.push_back(arr[0][j]);
    }
    
}
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int>(n-1));

        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>arr[i][j];
            }
        }

        // vector<int> ans(n+1);
        // bool bingo = false;
        // for(int i=0;i<n-3;i++){
        //     for(int j=0;j<n;j++){
        //         if(arr[i][j] == arr[i+1][j] || arr[i][j] == arr[i+2][j]){
        //             ans.push_back(arr[i][j]);
        //         }
        //         else{
        //             ans.push_back(arr[i+1][j]);
                    // ansPush(ans, n, arr, j);
        //             break;
        //         }
                
                
        //     }
        // }

        vector<int> permutation = reconstructPermutation(arr);

        for (int i = 0; i < n; i++) {
            cout << permutation[i] << " ";
        }

        cout<<endl;

    }
    
 
}