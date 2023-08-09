//Minimum number of sets with value less than k
//Input: str="1234" and y=30;
//Output: 3

#include<iostream>
#include<string>
using namespace std;

int count_sets(string &s, int y){
    int l=s.length(), flag=0, num=0, count=0;

    for(int i=0; i<l; i++){

        num=num*10+(s[i]-'0');

        if(num<=y) flag=1;
        else{
            if(flag) count+=1;
            flag=0;
            num=s[i]-'0';

            if(num<=y) flag=1;
            else num=0;
        }
    }
    if(flag==1) count+=1;
    return count;
}
int main(){
    string str="1234";
    int y=30;
    int cnt=count_sets(str, y);
    cout<<cnt;
    return 0;
}