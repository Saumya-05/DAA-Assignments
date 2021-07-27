#include <iostream>
#include<string>
using namespace std;

int binearSearch(int arr[],int n, int key, int search)
{
    int l=0,u=n-1,res=-1;
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(arr[mid]==key)
        {
            res = mid;
            if(search)
            {
                u=mid-1;//search left side until you find the 1st occurrence of key
            }
            else
            {
                l=mid+1;//search right side until you find the last occurrence of key
            }
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
    return res;
}

int main()
{
    int t,i,n,j,key,left,right,c=0;
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
        left=binearSearch(arr,n,key,1);//passing 1 to search left after finding mid==key and find 1st occurrence of key
        right=binearSearch(arr,n,key,0);//passing 0 to search right after finding mid==key and find last occurrence of key
        c=right-left+1;
        if(left!=-1)
        {
            ans[i]= to_string(key)+"-"+to_string(c);
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}