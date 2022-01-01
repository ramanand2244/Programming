#include <bits/stdc++.h>
using namespace std;



struct node{
    int data;
    struct node *next;
};

struct node *top;

// pushing the value at the begnning of the linked list
void push(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));  // assigning the memory
    if (!temp)
    {
        cout<<"\n memory can't allocate"<<endl;
    }
    temp->data = data;
    temp->next = top;
    top = temp;
}

// dispaying t all the data in the linked list
void display()
{
    struct node *temp = top;
    if(top == NULL)
    {
        cout<<"\nStack is empty";
        exit(1);
    }
    else
    {
        
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}

// checking if the stack is empty
int isEmpty()
{
    return top == NULL;
}


// pop the element from the stack
int pop()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        cout<<"\nStack is empty"<<endl;
        exit(1);
    }
    else
    {
        int val = temp->data;
        temp = top;
        top = top->next;
        free(temp);
        return val;
    }
}


// last element of the stack
int peek()
{
    if (!isEmpty())
    {
        return top->data;
    }
    else
    {
        exit(1);
    }
}

int main()
{
    push(10);
    push(25);
    push(49);
    push(128);
    cout<<"Pop element is "<<pop()<<endl;
    display();
    cout<<"\nPeek element is "<<peek()<<endl;
    return 0;
}
