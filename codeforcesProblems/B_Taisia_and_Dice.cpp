#include <bits/stdc++.h>
using namespace std;

// write a function to predict the dice numbers if sum and number of dice is given

vector<int> findDiceCombination(int n, int r, int max) {
    vector<int> current(n);
    vector<int> result;

    for (int i = 0; i < n; i++) {
        current[i] = 1;
    }

    while (current[0] < 7 - (n - 1)) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += current[i];
        }
        if (sum == r) {
            return current;
        }

        // Generate the next combination
        current[n - 1]++The first line of the input contains an integer tt (1≤t≤261≤t≤26) — the number of test cases.;
        for (int i = n - 1; i > 0; i--) {
            if (current[i] > max) {
                current[i] = 1;
                current[i - 1]++;
            }
        }
    }
    return result;
}


 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n, s, r;
        cin>>n>>s>>r;

        int lastNum = s-r;

        vector<int> ans = findDiceCombination(n-1, r, s-r);

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<lastNum<<endl;

    }
    
 
}