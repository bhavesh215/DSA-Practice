#include<bits/stdc++.h>
using namespace std;

long fastPowerModulo(long a,long b,long n){
    
    long res=1;
    
    while(b>0){
        
        if(b&1){
            res=(res * (a%n))%n;
        }
        
        a=(a%n*a%n)%n;
        b=b>>1;
    }
    
    return res;
}

int main(){
    
    long a,b,n;
    cin>>a>>b>>n;
    
    cout<<fastPowerModulo(a,b,n)<<"\n";
    return 0;
}