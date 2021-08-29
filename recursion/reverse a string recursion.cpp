
#include<iostream>
using namespace std;

 void reverse(string s,int n,int i){

  if(n==0)
    return;
    reverse(s,n-1,i+1);
  cout<<s[i];
  return;

    }




int main() {
string s;
cin>>s;
reverse(s,s.length(),0);

return 0;
}




