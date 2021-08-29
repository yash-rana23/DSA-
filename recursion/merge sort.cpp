#include<iostream>
using namespace std;

void merge(int a[],int si,int li,int mid)
{
    for(int i=si;i<=mid;i++)
    {
        for(int j=mid+1;j<=li;j++)
        {

        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }

    }
}



void sort( int a[],int si,int li)
{
    if(si>=li)
        return;
    int mid=(si+li)/2;
    sort(a,si,mid);
    sort(a,mid+1,li);
    merge(a,si,li,mid);

}


int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,0,n);
     for(int i=0;i<n;i++)
        cout<<s[i];


}

