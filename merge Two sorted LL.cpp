#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;

    Node(int data)
    {
        this->data = data;
        Next = NULL;
    }
};
 void print(Node* head)
    {
        Node* temp = head;
        while(temp!= NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->Next;
        }

    }
Node* input()
{
    int data;cin>>data;
    Node* h1 = NULL;
    Node* tail = NULL;
    while(data!= -1){
        Node* newnode = new Node(data);
        if(h1 = NULL)
        {
            h1 = newnode;
            tail = newnode;

        }
        else{
            tail->Next = newnode;
            tail = newnode; 
        }
        cin>>data;
    }
    return h1;
}
Node* takeinput()
{
    int data; cin>>data;
    Node* h2 = NULL;
    Node* tail = NULL;
    while(h2!= NULL){
        Node* newnode = new Node(data);
        if(data!= -1)
        {
            h2 = newnode;
            tail = newnode;
            
        }
        else{
            tail->Next = newnode;
            tail = newnode;
        }
        cin>>data;
    }
    return h2;
}
// Node* merge(Node* h1, Node* h2 )
// {
//     Node* fhead = NULL;
//     Node* thead = NULL;

//     if(h1!= NULL && h2!= NULL)
//     {
//         if(h1->data<h2->data)
//         {
//             fhead = h1;
//             thead = h1;
//             h1 = h1->Next;
//         }
//         else{
//             fhead = h2;
//             thead = h2;
//             h2 = h2->Next;
//         }
//     }
//     else if(h1!=NULL)
//     {
//         return h1;
//     }
//     else if(h2!= NULL)
//     {
//         return h2;
//     }
//     else{
//         return NULL;
//     }
//     while(h1!= NULL && h2!= NULL)
//     {
//         if(h1->data<h2->data){
//             thead->Next = h1;
//             h1 = h1->Next;
//         }
//         else{
//             thead->Next = h2;
//             h2 = h2->Next;
//         }
//         thead = thead->Next;
//     }
//     if(h1 == NULL)
//     {
//         thead->Next =h2;
//     }
//     else if(h2==NULL){
//         thead->Next = h1;
//     }
//     return fhead;
// }


Node* mergell(Node* h1, Node* h2)
{
    if(!h1)
    {
        return h2;
    }
    else if(!h2)
    {
        return h1;
    }
    else{
    if(h1->data < h2->data)
    {
        h1->Next = mergell(h1->Next,h2);
        return h1;
    }
    else{
        h2->Next =mergell(h1,h2->Next);
        return h2;
    }
        
    }
}
int main()
{Node* n1 = new Node(1);
Node*head1 = n1;
Node* n2 = new Node(2);
n1->Next = n2;
Node* n3 = new Node(4);
n2->Next = n3;
Node* n4 = new Node(6);
n3->Next = n4;
Node* n5 = new Node(10);
n4->Next = n5;


Node* m1 = new Node(3);
Node* head2 = m1;
Node* m2 = new Node(5);
m1->Next = m2;
Node* m3 = new Node(7);
m2->Next = m3;
Node* m4 = new Node(8);
m3->Next = m4;
Node* m5 = new Node(9);
m4->Next = m5;

Node* mergehead = mergell(head1,head2);
print(mergehead);
return 0;






}
