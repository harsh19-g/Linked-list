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
    void print(Node* head)
    {
        Node* temp = head;
        while(temp!= NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
    Node* input_data()
    {
        int data;
        cin>>data;
        Node* head = NULL;
        while(data!= -1)
        {
            Node* newnode = new Node(data);
            if(head == NULL)
            {
                head = newnode;
            }
            else
            {
                Node* temp = head;
                while(temp->next != NULL)
                {
                    temp=temp->next;
                }
                temp->next = newnode;
            }
            cin>>data;


        }
        return head;
    }
    
    Node* insert(Node* head, int i, int data)
    {
        int count = 0;
        Node* temp = head;
        Node* newnode = new Node(data);
        if(i==0)
        {
            newnode->next = head;
            head = newnode;
            return head;
        }
        while(temp!= NULL && count < i-1)
        {
            temp = temp->next;
            count++;

        }
        if(temp!= NULL){
        newnode->next = temp->next;
        temp->next = newnode;
        }
        return head;
        
    
    }



   /* Node* del(Node* head,int k)
    {
        int count = 0;
        Node* temp = head;
        if(k==0)
        {
            Node* b = head;
            head = b->next;
            delete b;
            return head;
        }
        while(count<k-1)
        {
            temp = temp->next;
            count++;
        }
        Node* a = temp->next;
        temp->next = a->next;
        delete a;

    }*/
    /*
    Node* rec_insert(Node* head,int i,int data)
    {
        if(head == NULL)
        {
            return new Node(data);

        }
        if(i == 0)
        {
            Node* newnode = new Node(data);
            newnode->next = head;
            head = newnode;
            return head;
        }
        else
        {
            head->next = rec_insert(head->next, i-1, data);

        }
        return head;
    } */ 
    Node* del_rec(Node* head , int i)
    {
        if(head = NULL)
        {
            return NULL;
        }
        if(i == 0)
        {
            Node* a = head->next;
            delete head;
            head = a;
            // return head;

        }
        else {
            head->next = del_rec(head->next, i-1);
        return head;
        }
    }      
int main()
{
    Node* head = input_data();
    // cout<<endl;
    // print(head);
    // cout<<endl;
    int i,data;
    cin>>i>>data;
    head = insert(head,i,data);
    // print(head);



    // int k; 
    // cin>>k;
    // head = del(head,k);
    // print(head);

    // int n;cin>>n;
    // int value;cin>>value;
    // head = rec_insert(head, n, value);
    // print(head);
    // cout<<endl;
    // int j;cin>>j;
    // head = del_rec(head, j);
    print(head);

}