#include <bits/stdc++.h>
#include<string.h>
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
string sum_pair(int arr[],int n,int key)
{
    int i,diff=0,c=0,flag=0;
    string p="";
    sort(arr, arr + n);
    for(i=0;i<n-1;i++)
    {
        diff = key-arr[i];
        if(binarySearch(arr,n,diff) && diff>arr[i])
        {
            p+=to_string(arr[i])+" "+to_string(diff)+",";
            flag=1;
        }
    }
    if(flag==1)
        return p.substr(0,p.length()-1);
    else
        return "No such pairs exit";
}

int main()
{
    int t,i,n,j,key;
    cin>>t;
    string ans[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cin>>key;
        ans[i] = sum_pair(arr,n,key);
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}