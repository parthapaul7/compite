#include <bits/stdc++.h>
using namespace std;
int noOfUniqueChars(string str)
{
    //use map
    set<char> m; 
    for (int i = 0; i < str.length(); i++)
    {
        m.insert(str[i]);
    }
    return m.size();
}



int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        string str;
        cin >> n >> str;

        int pt=0,ans=0;
        for(int i=0;i<n;i++){
            int temp = noOfUniqueChars(str.substr(0,i)) + noOfUniqueChars(str.substr(i,n-i));
            ans= max(ans,temp);
        }

        cout<<ans<<endl;
    }
}