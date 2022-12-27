#include<bits/stdc++.h>
using namespace std;

string checkPrime(int n){
    
    int i;
    
    for(i=2;i<n;i++){
        if(n%i==0){
            return "Not Prime";
        }
    }
    
    if(i==n){
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