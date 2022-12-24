#include<bits/stdc++.h>
using namespace std;
string DecimalToHexaDecimal(int n){
    
    int x=1;
    string ans="";
    
    while(x<=n){
        x*=16;
    }
    
    x/=16;
    
    while(x>0){
        
        int q=n/x;
        
        if(q<=9){
            ans+=to_string(q);
        }
        
        else if(q>=10 && q<=15){
            char c= 'A'+q-10;
            ans.push_back(c);
        }
        
        n-=q*x;
        x/=16;
    }
    
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<DecimalToHexaDecimal(n)<<endl;
    return 0;
    
}