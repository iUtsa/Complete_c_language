#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;

    if(a+b==c && s=='+' && q=='='){
        cout<<"Yes";
    }else if(a-b==c && s=='-' && q=='='){
        cout<<"Yes";
    }else if(a*b==c && s=='*' && q=='='){
        cout<<"Yes";
    }else if(a+b!=c && s=='+'){
        cout<<a+b;
    }else if(a-b!=c && s=='-'){
        cout<<a-b;
    }else if(a*b!=c && s=='*'){
        cout<<a*b;
    }
    return 0;
}