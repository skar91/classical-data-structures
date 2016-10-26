#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *root=NULL, *temp, *ttemp;

void add(int x)
{
    if(root==NULL)
    {
        node *temp = new node;
        temp->data=x;
        temp->left=temp->right=NULL;
        root=temp;
    }
    else
    {
        temp=root;
        while(temp!=NULL)
        {
            if(x==temp->data) return;
            else if(x<temp->data)
            {
                ttemp=temp;
                temp=temp->left;
            }
            else
            {
                ttemp=temp;
                temp=temp->right;
            }
        }
        node *temp= new node;
        if(x<ttemp->data)
        {
            ttemp->left=temp;
            temp->data=x;
            temp->left=temp->right=NULL;
        }
        else
        {
            ttemp->right=temp;
            temp->data=x;
            temp->left=temp->right=NULL;
        }
    }

}


void InOrderTraversal(node *g)
{
    if(g==NULL) return;
    InOrderTraversal(g->left);
    cout<<g->data<<" ";
    InOrderTraversal(g->right);
}

int main()
{
    add(3);
    add(5);
    add(4);
    add(2);
    add(1);
    InOrderTraversal(root);
    return 0;
}
