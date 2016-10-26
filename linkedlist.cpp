#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *first=NULL, *temp, *ttemp;

void add(int x)
{
  if(first==NULL)
  {
      node *temp = new node;
      temp->data=x;
      temp->next=NULL;
      first=temp;
  }
  else
  {
      temp=first;
      while(temp->next!=NULL)
        temp=temp->next;
      node *ttemp=new node;
      temp->next=ttemp;
      ttemp->data=x;
      ttemp->next=NULL;

  }
}


void display()
{
    temp=first;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }

    cout<<"NULL";

}

int main()
{
    add(1);
    add(2);
    add(3);
    add(4);
    display();
    return 0;
}
