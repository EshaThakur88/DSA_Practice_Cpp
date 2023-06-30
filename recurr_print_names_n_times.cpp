#include<iostream>
using namespace std;

void print_name(string name, int n){
    
    if(n==0) return;
    cout<<name<<endl;
    print_name(name, --n);
}

int main(){
    string name="Esha";
    int n=5;
    print_name(name,n);
    return 0;
}