#include <iostream>
#include<string>
using namespace std;

string convertString(string S, int a, int b) {
    int left = 0;
    int right = S.size() - 1;

    for(auto s: S){
        if(s=='0'){
            a--;
        }
        else if(s=='1'){
            b--;
        }
    }
    // a=a-count(S.begin(),S.end(),'0');
    // b=b-count(S.begin(),S.end(),'1');

    while (left < right) {
        
        if (S[left] == '?' && S[right] == '?') {
            if (a > b) {
                S[left] = S[right] = '0';
                a -= 2;
            } 
            else{
                S[left] = S[right] = '1';
                b -= 2;
            } 
        } 
        else if (S[left] == '?' && S[right] != '?') {
            if(S[right]=='0'){
                S[left]=S[right];
                a--;
            }
            else{
                S[left]=S[right];
                b--;
            }
        } 
        else if (S[right] == '?' && S[left] != '?') {
            if(S[left]=='0'){
                S[right]=S[left];
                a--;
            }
            else{
                S[right]=S[left];
                b--;
            }
        } 
        // else if (S[left] != S[right]) {
        //     return "-1";
        // }

        left++;
        right--;
    }

    if (S.size() % 2 != 0 && S[S.size() / 2] == '?') {
        if (a > b) {
            S[S.size() / 2] = '0';
            a--;
        } else {
            S[S.size() / 2] = '1';
            b--;
        }
    }

    if (a == 0 && b == 0) {
        return S;
    } else {
        return "-1";
    }
} 

int main() {
    string S = "10?????1";
    int a = 4, b = 4;

    cout << convertString(S, a, b) << endl;

    return 0;
}
