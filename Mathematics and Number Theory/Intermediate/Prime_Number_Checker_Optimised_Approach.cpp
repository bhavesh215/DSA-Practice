#include<bits/stdc++.h>
using namespace std;

string checkPrime(int n){
    
    int i;
    bool flag=true;
    
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=false;
        }
    }
    
    if(flag==true){
        return "Prime";
    }
    
    return "Not Prime";
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<n<<" is "<<checkPrime(n)<<"\n";
    return 0;
}