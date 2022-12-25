#include<bits/stdc++.h>
using namespace std;

int setBit(int n,int i){
    
    return (n | (1<<i)) ;
}

int main(){
    
    int n,pos;
    cin>>n>>pos;
    
    cout<<setBit(n,pos)<<endl;
    
    return 0;
}