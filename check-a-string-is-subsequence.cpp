#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    int n= a.size();
    int m= b.size();
    int x=0;
    
    //flag
    bool ans= false;
    //normal
    for(char c: b){
        if(c == a[x]){
            x++;
        }
        if(x== n){
            ans= true;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
    return 0;
}