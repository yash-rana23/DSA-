

#include <bits/stdc++.h>

using namespace std;
template <typename T , typename V>
class Pair{

T x;
V y;
public :
    T getx(){
    return x;}
    V gety (){
    return y;
    }
    void setx(T x){
    this->x=x;
    }
    void sety(V y){
    this->y=y;
    }



};



int main(){

Pair <Pair<int , int>,int> p1;

p1.sety(30);
Pair <int,int> p2;
p2.setx(10);
p2.sety(20);
p1.setx(p2);


cout<<p1.getx().getx();
cout<<p1.getx().gety();
cout<<p1.gety();
}
