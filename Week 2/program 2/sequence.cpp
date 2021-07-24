#include<iostream>
using namespace std;

string sequence(int arr[],int n)
{
    int i,j,k,s=0;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            s=arr[i]+arr[j];
            for(k=j+1;arr[k]<=s;k++)
            {
                if(s==arr[k])
                {
                    return to_string(i+1)+","+to_string(j+1)+","+to_string(k+1);
                }
            }
        }
    }
    return "No sequence found";
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
        ans[i]=sequence(arr,n);
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
