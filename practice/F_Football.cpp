#include <iostream>
using namespace std;

int main()
{

    int n, x, y;
    cin >> n >> x >> y;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << x << ":" << y << endl;
        return 0;
    }

    // 2nd case
    if (x + y < n)
    {
        cout << n - x - y << endl;
        int a = x;
        int b = y;

        for (int i = 0; i < n; i++)
        {
            if (a)
            {
                cout << 1 << ":" << 0 << endl;
                a--;
            }
            else if (b)
            {
                cout << 0 << ":" << 1 << endl;
                b--;
            }
            else{
                cout<<0<<":"<<0<<endl;
            }
        }
        
    }
    // 3rd case
    if(x+y >= n && x == 0 || y == 0){
        cout<<0<<endl;
        for(int i=0;i<n;i++){
            if(x){
                if(i == n-1){
                    cout<<x<<":"<<0<<endl;
                }
                else{
                cout<<1<<":"<<0<<endl;
                x--;
                }
            }
            if(y){
                if(i == n-1){
                    cout<<0<<":"<<y<<endl;
                }
                else{
                cout<<0<<":"<<1<<endl;
                y--;
                }
            }
        }
    }

}