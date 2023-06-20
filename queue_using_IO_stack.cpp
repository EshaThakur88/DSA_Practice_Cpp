#include <bits/stdc++.h>

using namespace std;

class Queue{
    stack<int> input, output;
    public:
    void push(int x){
        input.push(x);
    }

    void pop(){
        if(!output.empty()){
            output.pop();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            output.pop();
        }
    }

    int top(){
        if(!output.empty()){
            return output.top();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }

    int size(){
        if(!output.empty()){
            return output.size();
        }
        else{
            // while(!input.empty()){
            //     output.push(input.top());
            //     input.pop();
            // }
            return input.size();
        }
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
    cout<<"Size of queque: "<<q1.size()<<endl;
    return 0;
}