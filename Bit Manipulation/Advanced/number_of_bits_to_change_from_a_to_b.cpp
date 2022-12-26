#include<bits/stdc++.h>
using namespace std;


int countDifferentBits(int a, int b){
    
    int x= a ^ b;
    
    int ans=0;
    
    while(x>0){
        ans++;
        x=x&(x-1);
    }
    
    return ans;
}

int main(){
    
    int a,b;
    cin>>a>>b;

    cout<<countDifferentBits(a,b)<<"\n";
    return 0;
}