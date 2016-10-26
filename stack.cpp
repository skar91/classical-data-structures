#include<iostream>
#define MAX 10
using namespace std;

struct node
{
    int data;
    node *next;
};

node *top=NULL, *temp;
int count=0;

void push(int x)
{
    if(count==MAX)
    {
        cout<<"Stack is full!";
        return;
    }
    else
    {
        node *temp=new node;
        count++;
        if(top==NULL)
        {
            temp->data=x;
            temp->next=NULL;
            top=temp;
        }
        else
        {
            temp->data=x;
            temp->next=top;
            top=temp;
        }
    }
}


void pop()
{
    if(count==0)
    {
        cout<<"Underflow!";
        return;
    }
    else
    {
        count--;
        temp=top;
        top=top->next;
        temp->next=NULL;
        delete temp;
    }

}

void display()
{
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }

}

int main()
{
    push(1);
    push(2);
    push(3);
    push(1);
    pop();
    push(2);
    push(3);
    pop();
    display();
    return 0;
}
