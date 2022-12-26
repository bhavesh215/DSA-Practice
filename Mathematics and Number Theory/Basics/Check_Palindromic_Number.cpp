#include<bits/stdc++.h>
using namespace std;

bool checkPalindromeNumber(int n){
    
    int temp=n,rev=0;
    
    while(n>0){
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    
    if(rev==temp){
        return true;
    }
    
    return false;
    
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<checkPalindromeNumber(n)<<"\n";
    return 0;
}