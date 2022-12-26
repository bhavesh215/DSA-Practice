#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    
    int ans=0;
    
    while(n>0){
        
        int r=n%10;
        ans=ans*10+r;
        n/=10;
    }
    
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<reverseNumber(n)<<endl;
    return 0;
}