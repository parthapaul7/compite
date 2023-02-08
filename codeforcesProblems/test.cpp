#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fibonacci(ll n, unordered_map<ll, ll> &memo){
    auto *memo2 = new unordered_map<ll, ll>();

    if(n==0 || n==1) return n;

    if(memo2->find(n) != memo2->end()) {
        return memo2->at(n);
    }
    else{
        ll f = fibonacci(n-1, memo) + fibonacci(n-2, memo);
        memo2->insert(n,f);
        return memo2->at(n);
    }

    
}

 
int main(){

    unordered_map<ll, ll> memo;
    ll n;
    cin >> n;
    cout << fibonacci(n, memo) << endl;
    return 0;
 
}