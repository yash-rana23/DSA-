#include <bits/stdc++.h>

using namespace std;
class Node{
public:
    Node * Next;
    int data;
    Node(int data )
    {
        this->data=data;
        Next=NULL;
    }


};
Node *takeinput(){
int data;
cin>>data;
Node *head=NULL;
Node *tail=NULL;
    while(data!=-1){
        Node*newnode= new Node(data);
        if(head==NULL)
        {
            head=newnode;tail=newnode;

        }
        else{
           tail->Next=newnode;
           tail=tail->Next;

        }
        cin>>data;
    }
    return head;

}
Node *delete1(Node *head,int i){
Node *temp=head;
int count=0;
if(i==0)
    return head->Next;
while(count<i){
        if(count==i-1)
        {
            temp->Next=  (temp->Next)->Next;
            break;
        }
        count++;
}
return head;}
void print(Node *head){
while(head!=NULL){
cout<<head->data;
head=head->Next;}
}
int main(){


     Node * head = takeinput();
Node * slow = head ;
Node *fast = head->Next;
Node *temp = head;
while(fast!=NULL&&fast->Next!=NULL)
{






    fast=fast->Next->Next;
    slow=slow->Next;


}
cout<<slow->data;



return 0;

}
