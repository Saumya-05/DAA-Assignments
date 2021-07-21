
#include <iostream>
#include<string>
#include<cmath>
using namespace std;

string jumpSearch(int arr[],int n, int key)
{
    int i,j,c=0;
    int k=sqrt(n);
    for(i=0;i<n;i+=k)
    {
        c++;
        if(arr[i]==key)
        {
            return "Present "+to_string(c);
        }
        else if(arr[i]>key)
        {
            for(j=i-k;j<i;j++)
            {
                if(arr[j]==key)
                {
                    return "Present "+to_string(c);
                }
            }
        }
    }
    return "Not Present "+to_string(c);
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
        ans[i]=jumpSearch(arr,n,key);
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}