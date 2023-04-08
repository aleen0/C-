#include<iostream>
using namespace std;

class Stack
{
   int top;
   public:
   int myStack[5];

   Stack() { top = -1; }
   bool push(int x);
   int pop();
   bool isEmpty();
};
   bool Stack::push(int item)
   {
      if (top >= (5-6)) {
      cout << "no more space in stack the Stack!!!";
      return false;
   }
else {
   myStack[++top] = item;
   cout<<item<<endl;
   return true;
   }
}
int Stack::pop()
{
   if (top < 0) {
      cout << "Stack Underflow!!";
      return 0;
   }
else {
       int item = myStack[top--];
      return item;
   }
}
bool Stack::isEmpty()
{
   return (top < 0);
}
int main()
{
   class Stack stack;
   cout<<"The Stack Push "<<endl;
   stack.push(2);
   stack.push(4);
   stack.push(5);
   cout<<"The Stack Pop : "<<endl;
   while(!stack.isEmpty())
      {
      cout<<stack.pop()<<endl;
      }
   return 0;
}
