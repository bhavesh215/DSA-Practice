#include<bits/stdc++.h>
using namespace std;
int unique(int a[],int n){
    
    int xorsum=0;
    
    for(int i=0;i<n;i++){
        xorsum^=a[i];
    }
    
    return xorsum;
}

int main(){
    
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<unique(a,n)<<endl;
}