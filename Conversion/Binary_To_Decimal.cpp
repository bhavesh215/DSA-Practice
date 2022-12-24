#include<bits/stdc++.h>
using namespace std;
int BinaryToDecimal(int n){
    
    int ans=0,x=1;
    while(n>0){
        int r=n%10;
        ans+=x*r;
        n=n/10;
        x*=2;
    }
    
    return ans;
}
int main(){
    
    int n;
    cin>>n;
    
    cout<<BinaryToDecimal(n)<<endl;
    return 0;
}