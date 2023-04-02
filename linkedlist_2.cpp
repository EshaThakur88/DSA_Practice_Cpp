
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(node *&head, int value)
{
    node *temp = new node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_at_tail(node *&tail, int value)
{
    node *temp = new node(value);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insert_at_any_position(node *&head, node *&tail, int position, int value)
{
    if (position == 1)
    {
        insert_at_head(head, value);
    }
    node *node_to_insert = new node(value);
    node *temp = head;
    int count = 1;
    while (count < (position - 1))
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insert_at_tail(tail, value);
    }
    else
    {
        node_to_insert->next = temp->next;
        temp->next->prev = node_to_insert;
        temp->next = node_to_insert;
        node_to_insert->prev = temp;
    }
}

void delete_node(node* &head, node* &tail, int position){
    if(position==1){
        node* temp=head;
        head->next->prev=NULL;
        head=head->next;
        free(temp);
    }
    else{
        node* prev=NULL;
        node* curr=head;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(curr==tail){
            tail=prev;
            prev->next=NULL;
            curr->next=NULL;
            curr->prev=NULL;
            free(curr);
        }
        else{
            prev->next=curr->next;
            curr->next->prev=prev;
            curr->next=NULL;
            curr->prev=NULL;
            free(curr);
        }
    }
}

int get_length_ll(node *&head)
{
    int count = 0;
    node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_ll(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *n1 = new node(20);
    node *head = n1;
    node *tail = n1;

    insert_at_head(head, 10);
    print_ll(head);

    insert_at_tail(tail, 30);
    print_ll(head);

    // int n = get_length_ll(head);
    // cout << "Length: " << n << endl;

    insert_at_any_position(head, tail, 4, 15);
    print_ll(head);

    delete_node(head,tail,2);
    cout<<"deletion: ";
    print_ll(head);

    cout<<"head: "<<head->data<<" "<<" tail: "<<tail->data<<endl;


    return 0;
}