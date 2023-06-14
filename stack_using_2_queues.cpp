#include <bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1,q2;

public:
    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1,q2);
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
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"Current size of stack: "<<s.size()<<endl;
    cout<<"Current top element of stack: "<<s.top()<<endl;
    s.pop();
    cout<<"After first pop(), top element: "<<s.top()<<endl;
    s.pop();
    cout<<"After second pop(), top element: "<<s.top()<<endl;
    cout<<"Now the size of stack: "<<s.size()<<endl;
    return 0;
}