#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n, int key)
{
    int l=0,u=n-1;
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(arr[mid]==key)
        {
            return 1;
        }
        else if(arr[mid]>key)
        {
            u=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return 0;
}

int diff_pair(int arr[],int n,int key)
{
    int i,sum=0,c=0;
    sort(arr, arr + n);
    for(i=0;i<n-1;i++)
    {
        sum = arr[i]+key;
        if(binarySearch(arr,n,sum)==1)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int t,i,n,j,key;
    cin>>t;
    int ans[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cin>>key;
        ans[i]=diff_pair(arr,n,key);
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}