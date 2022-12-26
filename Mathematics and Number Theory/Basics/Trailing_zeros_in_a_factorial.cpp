#include<bits/stdc++.h>
using namespace std;

int trailingZeros(int n){
    
    int ans=0,x=5;
    
    while(x<=n){
        
        ans=ans+(n/x);
        x*=5;
    }
    
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<trailingZeros(n)<<"\n";
    return 0;
}