#include <bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1,s2;
public: 
    void push(int x){
        if(s1.empty()){
            s1.push(x);
            return;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            return;
        }
    }

    void pop(){
        if(s1.empty()) return;
        s1.pop();
    }

    int top(){
        if(s1.empty()) return -1;
        return s1.top();
    }

    int size(){
        if(s1.empty()) return 0;
        return s1.size();
    }

};

int main(){
    Queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    cout<<"Current top element: "<<q1.top()<<endl;
    q1.pop();
    cout<<"Top element after first pop(): "<<q1.top()<<endl;
    q1.pop();
    cout<<"Current element after second pop(): "<<q1.top()<<endl;
    return 0;
}