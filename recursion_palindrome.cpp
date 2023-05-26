#include <bits/stdc++.h>
using namespace std;

bool palindrome_check(string &s, int start, int end){

    //base case
    if(start>=end) return true;
    if(s[start]!=s[end]) return false;
    return palindrome_check(s,start+1,end-1);
}

bool palindrome_check_2(string &s,int len,int start){
    //base condition
    if(start==len/2) return true;
    //operation the funcion has to perform
    if(s[start]!=s[len-start-1]) return false;
    //recursive call
    return palindrome_check_2(s,len,start+1);           
}
int main(){
    string s;
    cin>>s;
    int len=0;
    for(auto i: s){
        len++;
    }

    //cout<<boolalpha<<palindrome_check(s,0,len-1);
    cout<<palindrome_check_2(s,len,0);
    return 0;
}