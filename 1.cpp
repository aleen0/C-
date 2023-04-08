
#include <iostream>
using namespace std;
class stack
{
    public:
    
    int stack_top=-1;
    int data;
    int stack_size=10;
    int info;
    stack *next;
    
    stack(int i)
    {
        info=i;
        next=0;
    }
    stack()
    {
        next=0;
    }
    
    int isempty();
    int push(int d);
    int pop();
    void display_items();
};
    stack *head=0, *tail=0;
    int stack :: isempty()
        {
            if(stack_top==-1)
            {
            return 1;
            }
            else
            {
            return 0;
            }
        }
        
        int stack::push(int d)
        {
            if (head==0)
            {
                head=tail=new stack(d);
            }
            else
            {
                stack *temp=head;
                head=new stack(d);
                head->next=temp;
            }
            return 0;
        }
        
        int stack::pop()
        {
            if(head==tail)
            {
                delete head;
            }
            else
            {
                stack *temp=head;
                head=head->next;
                delete temp;
            }
            return 0;
        }
        
        void stack::display_items()
        {
            stack *temp=head;
            while(temp!=0)
            {
                cout<<temp->info<<endl;
                temp=temp->next;
            }
        }
int main()
{
    stack s;
    s.push(7);
    s.push(10);
    s.push(15);
    s.pop();
    s.display_items();
    
    return 0;
}