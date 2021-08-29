

#include <bits/stdc++.h>
#include <string>
using namespace std;
template <typename T>

class Node{
public:
    T data;
    Node <T> *Next;
    Node(T data){
    this->data=data;
    Next=NULL;

    }


};
template <typename T>
class Queue{
T data;
Node <T>*head;
Node <T>*tail;
int size1;


public:
    Queue(){
    head=NULL;
    tail=NULL;
    size1=0;

    }
    int getsize(){
    return size1;}
    bool isempty(){
    return size1==0;

    }
// insert element
void enqueue(T element){
    Node <T>* newnode=new Node<T>(element);
    newnode->Next=NULL;
    if(head==NULL&&tail==NULL){
        head=newnode;
        tail=newnode;
    }
    tail->Next=newnode;
    tail=tail->Next;
    size1++;
    return;
    }

T front(){
if(isempty()){
    cout<<"empty queue";
    return 0;
}
return head->data;
}
T dequeue(){
if(isempty()){
    cout<<"empty queue";
    return 0;
}
Node <T>* temp=head;
T datap=head->data;
head=head->Next;
delete temp;

size1--;

return datap;

}

};


int main() {
Queue<int> q;
q.enqueue(10);
q.enqueue(10);
q.enqueue(10);
q.enqueue(10);
q.enqueue(10);
cout<<q.front()<<endl;
cout<<q.isempty()<<endl;
cout<<q.dequeue()<<endl;
q.enqueue(60);
q.enqueue(60);

return 0;

}
