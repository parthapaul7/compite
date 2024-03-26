#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, f , a , b;
    cin >> n >> f >> a >> b;
    int arr[20000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // if last elem of arr*a is more than f then we can send all the messages
    if (a*arr[n-1] < f)
    {
        cout <<"YES"<< endl;
        return;
    }

    int energy_saved = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && arr[i]*a > b)
        {
            energy_saved += arr[i]*a-b;
        }
        else if((arr[i] - arr[i-1])*a > b)
        {
            energy_saved += (arr[i] - arr[i-1])*a - b;

        }
    }

    if ((arr[n-1] - energy_saved) < f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}