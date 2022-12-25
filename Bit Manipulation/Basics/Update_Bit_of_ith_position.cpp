#include<bits/stdc++.h>
using namespace std;

int updateBit(int n,int pos,int k){
    
    n = (n & ~(1<<pos));
    
    return n | (k<<pos);
}

int main(){
    
    int n,pos,b;
    cin>>n>>pos>>b;
    
    cout<<updateBit(n,pos,b)<<"\n";
    
    return 0;
}