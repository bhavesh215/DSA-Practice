/*Given an integer array A of N integers, 
find the pair of integers in the array which have minimum XOR value.*/

#include<bits/stdc++.h>
using namespace std;
int minXor(int a[],int n){
    
    sort(a,a+n);
    
    int ans=INT_MAX,xorval;
    
    for(int i=0;i<n-1;i++){
        xorval=a[i]^(a[i+1]);
        ans=min(ans,xorval);
    }
    
    return ans;
}
int main(){
    
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<minXor(a,n)<<"\n";
    
    return 0;
}