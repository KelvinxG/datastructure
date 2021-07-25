#include <iostream>


using namespace std;

class Node{

    public:
    int data;
    Node* next;
};

void print();

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<"->"<<head->data;
        head=head->next;
    }
    
}

int main()
{

    Node* head=new Node();

    Node* second=new Node();

    Node* last=new Node();


    head->data=15;
    head->next=second;

    second->data=25;
    second->next=last;


    last->data=35;
    last->next=NULL;


    print(head);



    return 0;
}