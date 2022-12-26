#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
    
    int temp=n,ans=0;
    
    while(n>0){
        int r=n%10;
        ans+=r*r*r;
        n/=10;
    }
    
    if(temp==ans){
        return true;
    }
    
    return false;
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<checkArmstrong(n)<<endl;
    return 0;
}