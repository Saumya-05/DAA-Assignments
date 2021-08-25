#include <bits/stdc++.h>
using namespace std;

int frequency_check(int arr1[],int m,int arr2[], int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;
    }
}

int main()
{
    int m,n,i;
    cin>>m;
    int arr1[m];
    for(i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cin>>n;
    int arr2[n];
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    frequency_check(arr1,m,arr2,n);
    return 0;
}