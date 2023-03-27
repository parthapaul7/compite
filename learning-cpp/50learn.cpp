#include <bits/stdc++.h>
using namespace std;

int stairs(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int count = stairs(n-1) + stairs(n-2);
    return count;
}

int outputDigit(int n){
    if(n == 0){
        return -1;
    }
    int smallOutput = outputDigit(n/10);
    cout<<n%10<<endl;
    return smallOutput;
}

bool isSorted(int arr[], int size){
    //base case 
    if(size == 0 || size == 1){
        return true;
    }

    //recursive case
    if(arr[0] <  arr[1]){
        return isSorted(arr+1, size-1);
    }
    else{
        return false;
    }
}

int getSum(int arr[], int size, int sum){
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    return arr[0] + getSum(arr+1, size-1, sum);
}

int search(int arr[], int size, int target, int index){

    if(index == size){
        return -1;
    } 

    if( arr[index] == target){
        return index;
    }

    return search(arr,size,target,index+1);
}
 
int main(){
    int n;
    cin>>n;
    int arr[n]= {1,2,3,4,5,6,7,8,9};
    // cout<<stairs(n)<<endl;
    cout<<outputDigit(n)<<endl;
    cout<<isSorted(arr, n)<<endl;
    cout<<getSum(arr, n, 0)<<endl;
    cout<<search(arr, n, 6, 0)<<endl;
    return 0;
}