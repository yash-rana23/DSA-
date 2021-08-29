
#include <bits/stdc++.h>
using namespace std;

  int sorted(int a[],int n,int i){
 if(n==1){
    return 1;
 }

 int ans=sorted(a,n-1,i+1);
 if(a[i+1]>a[i])
    return ans;
 else
    return -1;

 }




int main() {
int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
        cin>>a[i];

    if(sorted(a,n,0)==1)
        cout<<"sorted";
    else
        cout<<"unsorted";

     return 0;
    }




