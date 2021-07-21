#include <iostream>
#include<string>
using namespace std;

string linearSearch(int arr[],int n, int key)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return "Present"+to_string(i+1);
    }
    else{
        return "Not Present"+to_string(i);
    }
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
        ans[i]=linearSearch(arr,n,key);
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
