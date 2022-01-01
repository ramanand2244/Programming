// code for Stack using array 

#include <iostream>
using namespace std;
# define MAX 1000

// defining the class and their function
class Stack {
    int top;
    public :
        int stack[MAX];
        Stack() {top = -1;}
        bool push(int x);
        int pop();
        void peek();
        bool isEmpty();
        void display();
};

// pushing the value into the array 
bool Stack::push(int x)
{
    if (top >= (MAX-1))
    {
        cout<<"Stack overflow\n";
        return false;
    }
    else
    {
        stack[++top] = x;
        cout<<x<<" pushed into the stack\n";
        return true;
    }
}

// check the stack is empty or not 
bool Stack::isEmpty()
{
    return (top<0);
}

// pop the element from the stack
int Stack::pop()
{
    if(isEmpty())
    {
        cout<<"No element in the stack\n";
        return 0;
    }
    else
    {
        int num = stack[top--];
        return num;
    }
}

// peek the element of the stack
void Stack::peek()
{
    if (isEmpty())
        cout<<"Stack is empty\n";
    else
    {
        cout<<"The peek element is "<<stack[top]<<endl;
    }
}

//display all the element of the stack
void Stack::display()
{
    int num = top;
    
    while(num>=0)
    {
        //cout<< "\nnum value is " << num <<endl;
        cout<<stack[num--]<<" ";
        
    }
    cout<<endl;
    
}

int main()
{
    class Stack s;
    s.push(10);
    s.push(25);
    s.display();
    s.peek();
    cout<<"Pop element is "<<s.pop()<<endl;
    s.display();
    cout<<"Pop element is "<<s.pop()<<endl;cout<<"Pop element is "<<s.pop()<<endl;
    cout<<s.isEmpty();
    return 0;
}
