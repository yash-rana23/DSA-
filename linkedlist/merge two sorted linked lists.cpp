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


     Node * head1 = takeinput();
     cout<<"enter 2nd";
     Node *head2=takeinput();
     Node *finalh;
     Node*finalt;
     if(head1->data<head2->data){
        finalh=head1;
        finalt=head1;
        head1=head1->Next;
        }
     else{
        finalh=head2;
        finalt=head2;
        head2=head2->Next;
        }
     while(head1!=NULL&&head2!=NULL){
        if(head1->data<=head2->data){
            finalt->Next=head1;
            finalt=finalt->Next;
            head1=head1->Next;

        }
        else{
            finalt->Next=head2;
           finalt=finalt->Next;
            head2=head2->Next;
        }

     }
     if(head1==NULL)
        finalt->Next=head2;
        else
        finalt->Next=head1;

    print(finalh);



return 0;

}
