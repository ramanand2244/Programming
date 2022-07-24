#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *p = NULL, *q = NULL, *list = head;
    int len = 0;
    while(list != NULL)
    {
        len++;
        list= list->next;
    }
    if (len <= 1) return head;
    int arr[len] = {0};
    list = head;
    for(int i = 0; i<len; i++)
    {
        arr[i] = list->data;
        list = list->next;
    }
    list =  head;
    for(int i = len-1; i>=0; i--)
    {
        list->data = arr[i];
        list = list->next;
    }
   return head;
}