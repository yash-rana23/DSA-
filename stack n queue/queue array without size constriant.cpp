

#include <bits/stdc++.h>
#include <string>
using namespace std;
template <typename T>
class Queuearray{
T *data;
int nextindex;
int firstindex;
int size1;
int capacity;
public:
    Queuearray(int s){
    data = new T[s];
    nextindex=0;
    firstindex=-1;
    size1=0;
    capacity=s;

    }
    int getsize(){
    return size1;}
    bool isempty(){
    return size1==0;

    }
// insert element
void enqueue(T element){
    if(size1==capacity)
    {

     T *newdata=new T[2*capacity];
     int j=0;
     for(int i=firstindex;i<capacity;i++){
        newdata[j]=data[i];
        j++;
     }
     for(int i=0;i<firstindex;i++){
        newdata[j]=data[i];
        j++;
     }
     delete [] data;
     data=newdata;
     firstindex=0;
     nextindex=capacity;
     capacity*=2;
    return;
    }
data[nextindex]=element;
nextindex++;
nextindex=(nextindex+1)%capacity;
if(firstindex=-1)
    firstindex=0;
size1++;

}
T front(){
if(isempty()){
    cout<<"empty queue";
    return 0;
}
return data[firstindex];
}
T dequeue(){
if(isempty()){
    cout<<"empty queue";
    return 0;
}
T temp=data[firstindex];
firstindex=(firstindex+1)%capacity;;
size1--;
if(size1==0){
    firstindex=-1;
    nextindex=0;

}
return temp;

}

};


int main() {
Queuearray<int> q(5);
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
cout<<1/2;
return 0;

}
