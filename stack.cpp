
#include "queue.h"
#include<iostream>
using namespace std;

Queue::Queue(){f= -1;r= -1;}
bool Queue::isEmpty(){
return (f==r);
}
bool Queue::isFull(){
return r==MAX-1;
}
void Queue::enqueue(char element){
if(isFull()){
cout<< "Cannot enqueue"<<element<<"Queue Overflow";
}
else{
r++;
this->elements[r] = element;
}
}
char Queue::dequeue(){
if(isEmpty()){
cout<< "Cannot dequeue"<<endl<< "queue Underflow";
}
else{
return elements[++f];
}
}
char Queue::front(){
if(isEmpty()){
cout<< "Cannot pop"<<endl<< "Queue Underflow";
}
else{
return elements[f];
}
}
char Queue::rear(){
if(isEmpty()){
cout<< "Cannot pop --"<<endl<< "Queue Underflow";
}
else{
return elements[r];
}
}
Queue::~Queue(){
}


using namespace std;
int main(){
Queue q;
q.enqueue('H');q.enqueue('E');q.enqueue('L');q.enqueue('L');q.enqueue('0');
cout<<q.dequeue();
cout<<q.dequeue();
cout<<q.dequeue();
}
