#include <bits/stdc++.h>

using namespace std;

 bool isPalindrome(int x) {
        int digits = (int) (log10(x) +1);
        cout<<digits<<endl;
        int tens = 1;
        while(digits > tens){
            int divisor = (int) pow(10,digits-1) + 0.5;
            int modular = (int) pow(10,tens) +0.5;
            int modDivisor = (int) pow(10,tens-1) + 0.5;
            int modModular = (int) pow(10,tens) + 0.5;
            // cout<<divisor<<" "<<modular<<endl;
            // cout<<digits<<" "<<tens<<endl;
            // cout<<modDivisor<<" "<<tens<<endl;
            // cout<<(x/divisor)%10<<" "<<(x%modular)/modDivisor<<endl;
            if( (x/divisor)%10== (x%modular)/modDivisor){
                digits--;
                tens++;
            }
            else{
                return false;
            }
        }

        return true;
    }
int main() {
    
    int n = 0;
    cout << isPalindrome(n) << endl;
}
