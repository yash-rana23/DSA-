#include<iostream>
#include<algorithm>
using namespace std;
void solve(int a,char src,char help,char dest){
   if(a==0)
    return;
solve(a-1,src,dest,help);
cout<<"move from "<<src<<"to "<<dest<<endl;
solve(a-1,help,src,dest);





}
int main(){
int a;
cin>>a;
solve(a,'A','B','C');


}
