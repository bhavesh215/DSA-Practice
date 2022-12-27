#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    
    if(b==0){
        return a;
    }
    
    return GCD(b,a%b);
}
int main(){
    
    int a,b;
    cin>>a>>b;
    
    cout<<"HCF of "<<a<<" and "<<b<<" is "<<GCD(a,b)<<"\n";
    return 0;
}