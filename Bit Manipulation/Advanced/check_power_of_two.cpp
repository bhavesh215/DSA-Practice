#include<bits/stdc++.h>
using namespace std;

bool checkPower(int n){
    
    return n && !(n&n-1);
}

int main(){
    
    int n;
    cin>>n;

    cout<<checkPower(n)<<"\n";
    return 0;
}