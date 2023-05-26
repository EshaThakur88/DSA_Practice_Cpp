#include <bits/stdc++.h>
using namespace std;

int count_subseq(string s, int k){
    int s_len=s.length();

    string s2="";
    for (int z = 0; z < k; z++)
    {
        s2+=s;
    }
    
    int s2_len=s2.length();

    int count=0;
    int ans;

    for(int i=0; i<s2_len;i++){
        if(s2[i]=='0'){
            for (int j = i+1; j < s2_len; j++)
            {
                if(s2[j]=='1' && i<j){
                    count=count+1;
                }
            }
            
        }
    
    }

    return count;

}
int main(){
    string str="1091";
    int k=2;
     
    int ans=count_subseq(str, k);
    cout<<ans<<endl;
    return 0;
}

