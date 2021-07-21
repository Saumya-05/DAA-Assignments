
#include <iostream>
#include<string>
using namespace std;

string binarySearch(int arr[],int n, int key)
{
    int l=0,u=n-1,c=0;
    while(l<=u)
    {
        c++;
        int mid=(l+u)/2;
        if(arr[mid]==key)
        {
            return "Present "+to_string(c);
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
    return "Not Present"+to_string(c);
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
        ans[i]=binarySearch(arr,n,key);
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
