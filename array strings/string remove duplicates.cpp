

#include <bits/stdc++.h>
#include <string>
using namespace std;

string removedup(string s){
if(s[0]=='\0'){
    return "";

}

if(s[0]==s[1]){


   for(int i=0;s[i]!='\0';i++){
    s[i]=s[i+1];
   }
   string p=removedup(s.substr(1));
     s=s.substr(0,1)+p;

    }



else{
     string p=removedup(s.substr(1));
     s=s.substr(0,1)+p;


}
return s;

}

int main()
{
    string s;
    getline(cin, s);
    cout<<removedup(s);

}
