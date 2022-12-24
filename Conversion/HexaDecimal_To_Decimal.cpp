#include<bits/stdc++.h>
using namespace std;
int HexadecimalToDecimal(string s){
    
    int ans=0,x=1;
    int n=s.size();
    
    for(int i=n-1;i>=0;i--){
        
        if(s[i]>='0' && s[i]<='9'){
            ans+=x*(s[i]-'0');
        }
        
        else if(s[i]>='A' && s[i]<='F'){
            ans+=x*(s[i]-'A'+10);
        }
        
        x*=16;
    }
    
    return ans;
}

int main(){
    
    string s;
    cin>>s;
    
    cout<<HexadecimalToDecimal(s)<<endl;
    return 0;
}