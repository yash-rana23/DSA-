#include<iostream>
using namespace std;
void sort(char a[])
{
    if(a[0]=='\0')
        return;
    if(a[0]!='x')
        sort(a+1);
    else
    {
        int i=1;
        for(;a[i]!='\0';i++)
        {
            a[i-1]=a[i];
        }
        a[i-1]=a[i];
        sort(a+1);
    }

}


int main()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s);
     for(int i=0;i<n;i++)
        cout<<s[i];


}



