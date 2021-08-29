#include<iostream>
#include<algorithm>
using namespace std;
void  substring(string a,string ans){//its subsequence not substirng

    if(a.size()==0){
        cout<<ans<<endl;
        return;

    }
    char c=a[0];
    int as= c;

 string r= a.substr(1);
  substring(r,ans);

  substring(r,ans+c);
  substring(r,ans+to_string(as));




}
int main(){
string a;
cin>>a;
substring(a,"");


}

