#include<iostream>
using namespace std;

int main()
{
    int i,j,n,count=0;
    cin>>n;
    int a[n],d[n];
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }
        for(i=0;i<n;i++)
    {
        cin>> d[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( a[j]<=d[i])
            {
                count++;
                break;
            }
            else
                break;


        }

    }

cout<<count;
}




