#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        next = NULL;
    }
};
void print(Node* temp)
{
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int getlen(Node* temp)
{int len = 0; 
    while(temp!= NULL)
    {
        len++;
        temp = temp->next;

    }
    return len;
}

Node* takeinput()
{
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data!= -1)
    {
        Node* newnode = new Node(data);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;

        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin>>data;

    }
    return head;
}
void mid_el(Node* temp)
{
    int len = getlen(temp);
    int mid = (len-1)/2;
    while(mid--)
    {
        temp = temp->next;

    }
    cout<<temp->data;
}
void mid(Node* temp)
{
    Node* first = temp;
    Node* sec = temp;
    if(temp!= NULL)
    {
    while(sec!= NULL && sec->next!= NULL)
    {
        first = first->next;
        sec = sec->next->next;
    }
    
    cout<<first->data;
    }
}
int main()
{
    Node* head = takeinput();
    cout<<endl;
    print(head);
    cout<<endl;
    mid(head);
    cout<<endl;
    int len =  getlen(head);
    cout<<len;
    cout<<endl;
    mid_el(head);

}