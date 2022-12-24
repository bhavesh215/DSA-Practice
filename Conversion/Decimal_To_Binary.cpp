#include<bits/stdc++.h>
using namespace std;
int DecimalToBinary(int n){
    
    int x=1,ans=0;
    
    while(x<=n){
        x*=2;
    }
    
    x/=2;
    
    while(x>0){
        int q=n/x;
        ans=ans*10+q;
        n-=q*x;
        x/=2;
    }
    
    return ans;
    
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<DecimalToBinary(n)<<endl;
    return 0;
}