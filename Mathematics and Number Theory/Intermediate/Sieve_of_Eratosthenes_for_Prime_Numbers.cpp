#include<bits/stdc++.h>
using namespace std;
void Sieve(int n){
    
    int check[n+1]={0};
    
    for(int i=2;i<=n;i++){
        if(check[i]==0){
            for(int j=i*i;j<=n;j+=i){
                check[j]=1;
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(check[i]==0){
            cout<<i<<" ";
        }
    }
    
    return;
}
int main(){
    
    int n;
    cin>>n;
    
    Sieve(n);
    return 0;
}
