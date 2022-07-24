#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
}*head;

void create(int arr[] , int n)
{
    struct  Node *t, *last;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = head;
    last = head;
    for(int i = 1 ; i < n ; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
    
}


void Display(struct Node *data)
{
    struct Node *val = data;

    do{

        cout<<val->data<<" ";
        val = val->next;
    }while(val != head);
}


int main(int argc, char *argv[]){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    create(arr,13);
    Display(head);
    return 0;
}