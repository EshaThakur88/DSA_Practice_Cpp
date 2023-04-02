#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data=data;
        this-> next=NULL;
    }
    // ~Node(){
    //     int value=this->data;
    //     if(this->next!=NULL){
    //         delete next;
    //         this->next=NULL;
    //     }
    // }

};

void insert_at_head(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}

void insert_at_tail(Node *&tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;    
}

void insert_at_any_position(Node* &head, Node* &tail, int position, int value)
{
    Node* temp=head;
    Node* NodeToInsert=new Node(value);
    int count=1;
    if(position==1)
    {    insert_at_head(head,value);
        return;
    }
    while(count<(position-1)){
        temp=temp->next;
        count++;
    }
    
    if(temp->next==NULL){
        insert_at_tail(tail,value);
        return;
    }                                                                                            
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;

}

void delete_node(Node* &head, Node* &tail, int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        if(curr==tail){
            tail=prev;
            free (curr);
            return;
        }
        curr->next=NULL;
        free(curr);
    }
}



void print_ll(Node* head){
    Node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* n1=new Node(7);
    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;
    Node* head=n1;
    Node* tail=n1;
    insert_at_head(head,10);
    insert_at_tail(tail,20);
    insert_at_any_position(head,tail,3,30);
    //10 7 30 20
    print_ll(head);

    cout<<head->data<<" "<<tail->data;
    cout<<endl;
    delete_node(head,tail,4);
    cout<<"after deleteing a node: ";
    print_ll(head);
    cout<<head->data<<" "<<tail->data;
    return 0;
}