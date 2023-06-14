#include <bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1;

public: 
    void push(int x){
        q1.push(x);
        for(int i=0; i<q1.size()-1; i++){
            q1.push(q1.front());
            q1.pop();
        }
    }

    void pop(){
        if(q1.empty()) return;
        q1.pop();
    }

    int top(){
        if(q1.empty()) return -1;
        return q1.front();
    }

    int size(){
        return q1.size();
    }
};

int main(){
    Stack S;
    S.push(1);  
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);

    cout<<"Current size of stack: "<<S.size()<<endl;
    cout<<"Top element of stack for now: "<<S.top()<<endl;
    S.pop();
    cout<<"Top element after 1st pop operation: "<<S.top()<<endl;
    S.pop();
    cout<<"Top element after 2nd pop operation: "<<S.top()<<endl;
    cout<<"Current size of stack now: "<<S.size()<<endl;

    return 0;
}