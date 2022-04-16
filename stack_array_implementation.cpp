#include<iostream>
using namespace std; 

#define MAX 10000
class Stack{
public:
  int top;
  int myStack[MAX];
  bool push(int x);
  bool isEmpty();
  bool isFull();
  void traverse();
  int pop();
  Stack(){
    top = -1;
  }
};
bool Stack::push(int x){
  if(top >= MAX-1){
    cout<<"Overflow"<<endl;
    return false;
  }
  else{
    myStack[++top] = x;
    cout<<x<<endl;
    return true;
  }
}
int Stack::pop(){
  if(top<0){
    cout<<"Stack Underflow"<<endl;
    return 0;
  }
  else{
    int item = myStack[top--];
    return item;
  }
}
bool Stack::isEmpty(){
  if(top == -1){
    cout<<"The stack is empty."<<endl;
    return true;
  }
  else{
    cout<<"The stack is not empty."<<endl;
    return false;
  }
}
bool Stack::isFull(){
  if(top == MAX-1){
    cout<<"The stack is Full"<<endl;
    return true;
  }
  else{
    cout<<"The stack is not full"<<endl;
    return false;
  }
}
void Stack:: traverse(){
  for(int i=0;i<=top;i++){
    cout<<myStack[i]<<" ";
  }
  cout<<endl;
}
int main(){
  Stack saif;
  saif.push(4);
  saif.push(4);
  saif.push(4);
  saif.push(4);
  saif.push(4);
  saif.push(4);
  saif.traverse();
  return 0;
}
