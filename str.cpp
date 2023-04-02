#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "My name is Esha";
    //replace space with @40

    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            s[i]= '@' +'4'+'0';
        }

    }

    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    
    return 0;
}