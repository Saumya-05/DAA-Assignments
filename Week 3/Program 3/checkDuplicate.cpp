#include <bits/stdc++.h>
using namespace std;

string checkDuplicates(int a[], int n)
{
    int i;
    string result = "No";
    sort(a,a+n);
    for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                result = "Yes";
                break;
            }
        }
    return result;
}

int main()
{
    int t,i,n,j;
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
        ans[i]=checkDuplicates(arr,n);
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}