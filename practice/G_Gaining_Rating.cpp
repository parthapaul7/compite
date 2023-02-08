#include <bits/stdc++.h>
using namespace std;
// write function to sort an array
typedef long long li;

 
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        li n, x ;
        li y;
        cin >> n >> x >> y;
        li arr[200000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        sort(arr, arr+n);
        li current = x;
        li ans=0;
 
        for (li i = 0; i < y - x; i++)
        {
            for (li j = 0; j < n; j++)
            {
                if (arr[j] <= current)
                {
                    current++;
                    ans++;
                }
                else
                {
                    current--;
                    ans++;
                }
 
                if(current == y){
                    cout << ans << endl;
                    break;
                }
            }
            if(current == y){
                break;
            }
            if(current <= x){
                // cout<<current<<endl;
                cout << -1 << endl;
                break;
            }
        }
    }
}