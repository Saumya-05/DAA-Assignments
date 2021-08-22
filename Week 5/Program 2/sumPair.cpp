#include <bits/stdc++.h>
#include<string.h>
using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{
    int i,j,k;
    int n1 = mid-lb+1;
    int n2 = ub-mid;
    
    int t1[n1],t2[n2];
    
    for(i=0;i<n1;i++)
        t1[i]=arr[lb+i];
    for(j=0;j<n2;j++)
        t2[j]=arr[mid+1+j];
        
    i=0,j=0,k=lb;
    while(i<n1 && j<n2)
    {
        if(t1[i]<t2[j])
        {
            arr[k++]=t1[i];
            i++;
        }
        else
        {
            arr[k++]=t2[j];
            j++;
        }
    }
    while(i<n1)
    {
        arr[k++]=t1[i];
        i++;
    }
    
    while(j<n2)
    {
        arr[k++]=t2[j];
        j++;
    }
}

void mergeSort(int arr[], int lb, int ub)
{
    int mid;
    if(lb<ub)
    {
        mid = (lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

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
    mergeSort(arr,0,n-1);
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