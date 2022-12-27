#include<bits/stdc++.h>
using namespace std;

long fastPower(long a,long b){
    
    long res=1;
    
    while(b>0){
        
        if(b&1){
            res=res*a;
        }
        
        b=b>>1;
        a=a*a;
    }
    
    return res;
}

int main(){
    
    long a,b;
    cin>>a>>b;
    
    cout<<fastPower(a,b)<<"\n";
    return 0;
}