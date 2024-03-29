#include <iostream>
using namespace std;

class Stack {
  int top;

public:
  int a[10]; 

  Stack() { top = -1; }
  bool push(int x);
  int pop();
  int peek();
  bool isEmpty();
};

bool Stack::push(int x)
{
  if (top >= (10 - 1)) {
    cout << "Stack Overflow";
    return false;
  }
  else {
    a[++top] = x;
    cout << x << " pushed into stack\n";
    return true;
  }
}

int Stack::pop()
{
  if (top < 0) {
    cout << "Stack Underflow";
    return 0;
  }
  else {
    int x = a[top--];
    return x;
  }
}
int Stack::peek()
{
  if (top < 0) {
    cout << "Stack is Empty";
    return 0;
  }
  else {
    int x = a[top];
    return x;
  }
}

bool Stack::isEmpty()
{
  return (top < 0);
}

int main()
{
  class Stack s;
  s.push(15);
  s.push(22);
  s.push(38);

  cout << s.pop() << " Element deleted from stack\n";

  cout << "Top element in a stack " << s.peek() << endl;

  cout << "Display Elements present in stack : ";
  while(!s.isEmpty())
  {
    cout << s.peek() << " ";
    s.pop();
  }

  return 0;
}

