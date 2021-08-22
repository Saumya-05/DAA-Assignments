#include <bits/stdc++.h>
#include<string.h>
using namespace std;

string countSort(char arr[], int n)
{
    int i,max_frequency=0;
    int count[125] = {0};
    char temp[n],max;
    for(i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    
    for(i=97;i<123;i++)
    {
        if(count[i]>max_frequency)
        {
            max_frequency=count[i];
            max=static_cast<char>(i);
        }
    }
    
    if(max_frequency<2)
        return "No duplicates found";
    else
    {
        string s(1,max);
        return s+"-"+to_string(max_frequency);
    }
}

int main()
{
    int t,i,n,j;
    cin>>t;
    string ans[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        char arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        ans[i]=countSort(arr,n);
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}