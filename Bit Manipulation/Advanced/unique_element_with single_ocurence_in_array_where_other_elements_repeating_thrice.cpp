#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int i){
    
    return ((n & (1<<i)) != 0);
}

int setBit(int n,int i){
    
    return (n | (1<<i));
}

int checkUnique(int a[],int n){
    
    int bitArr[32];
    
    for(int i=0;i<32;i++){
        bitArr[i]=0;
    }
    
    for(int i=0;i<32;i++){
        
        for(int j=0;j<n;j++){
            if(getBit(a[j],i)==1){
                bitArr[i]++;
            }
            else{
                continue;
            }
        }
    }
    
    int res=0;
    
    for(int i=0;i<32;i++){
        if(bitArr[i]%3!=0){
            res=setBit(res,i);
        }
    }
    
    return res;
}

int main(){
    
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<checkUnique(a,n)<<"\n";
    
    return 0;
}