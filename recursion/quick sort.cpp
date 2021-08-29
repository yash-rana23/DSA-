#include<bits/stdc++.h>
using namespace std;

int partition( int a[],int si,int ei)
{


int count=0,x=a[si];
    for(int i=si;i<=ei;i++)
    {
        if(a[i]<x)
            count++;
    }
    int temp=a[si];
    a[si]=a[si+count];
    a[si+count]=temp;
     for(int i=si;i<(si+count);i++)
     {
         for(int j=ei;j>si+count;j--)
         {
             if(a[i]>>x&&a[j]<<x)
             {
                 int t=a[i];
                 a[i]=a[j];
                 a[j]=temp;
                 break;
             }
         }
     }

return si+count;
}



void quicksort(int a[], int si , int ei )
{

    if(si>=ei)
        return;
    int c = partition(a,si,ei);
    quicksort(a,si,c-1);
    quicksort(a,c+1,ei);
}



int main()
{
    int size;
cin>>size;
int a[size];
for(int i=0;i<size;i++){
    cin>>a[i];}
quicksort(a,0,size-1);

for(int i=0;i<size;i++){
    cout<<a[i];}

    return 0;


}
