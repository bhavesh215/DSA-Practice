#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int i){
    
    return ((n & (1<<i))!=0);
}
void two_unique(int a[],int n){
    
    int xorsum=0;
    
    for(int i=0;i<n;i++){
        xorsum^=a[i];
    }
    
    int temp=xorsum;
    
    int k=0;
    
    while(!getBit(xorsum,k)){
        k++;
    }
    
    for(int i=0;i<n;i++){
        if(getBit(a[i],k)==1){
            temp=temp^a[i];
        }
        
        else{
            continue;
        }
    }
    
    int result=temp^xorsum;
    cout<<temp<<" "<<result<<endl;
    
    return;
}

int main(){
    
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    two_unique(a,n);
    
    return 0;
}