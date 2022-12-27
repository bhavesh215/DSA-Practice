#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    
    int ans;
    
    while(a>0 && b>0){
        ans=a%b;
        a=b;
        b=ans;
    }
    
    return a;
}
int main(){
    
    int a,b;
    cin>>a>>b;
    
    cout<<"HCF of "<<a<<" and "<<b<<" is "<<GCD(a,b)<<"\n";
    return 0;
} 