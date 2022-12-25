#include<bits/stdc++.h>
using namespace std;

void checkEven(int n){
    
    if(!(n&1)){
        cout<<n<<" is even \n";
    }
    
    else{
        cout<<n<<" is odd \n";
    }
    
    return;
}

int main(){
    
    int n;
    cin>>n;
    
    checkEven(n);
    
    return 0;
}