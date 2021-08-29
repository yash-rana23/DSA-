

#include <bits/stdc++.h>

using namespace std;

class StackArray{
int *data;
int nextindex;
int capacity;
public:
    StackArray(int totalsize){
    data=new int[4];
    nextindex=0;
    capacity=4;

    }
    //return the number of elements present in the stack
    int size(){
    return nextindex;
    }
    bool isEmpty(){
    return nextindex==0;

    }
    //insert push function
    void push(int element){
        if(capacity==nextindex){
            int *newdata = new int[2*capacity];
            for(int i=0;i<capacity;i++){

                newdata[i]=data[i];
            }
            capacity = capacity*2;
            delete [] data;
            data =newdata;



        }
    data[nextindex]=element;
    nextindex++;
    }
    //delete element
    int pop(){
    if(isEmpty()){
        cout<<"stack is empty";
        return 0;
    }

    nextindex--;
    return data[nextindex];

    }
    int top(){
        if(isEmpty()){
        cout<<"stack is empty";
        return 0;
    }
    return data[nextindex-1];
    }





};



int main(){

StackArray s1(4);
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);
s1.push(50);
cout<<s1.top()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.size()<<endl;
cout<<s1.isEmpty()<<endl;
return 0;
}
