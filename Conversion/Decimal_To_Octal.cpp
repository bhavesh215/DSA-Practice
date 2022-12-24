#include<bits/stdc++.h>
using namespace std;

int DecimalToOctal(int n){
    
    int x=1,ans=0;
    
    while(x<=n){
        x*=8;
    }
    
    x/=8;
    
    while(x>0){
        int q=n/x;
        ans=ans*10+q;
        n-=q*x;
        x/=8;
    }
    
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<DecimalToOctal(n)<<endl;
    return 0;
    
}