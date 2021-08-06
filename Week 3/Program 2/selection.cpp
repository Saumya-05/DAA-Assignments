#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    int i,j,pos,temp,com=0,swaps=0;
    for(i=0;i<n-1;i++)
    {
       pos=i;
       for(j=i+1;j<n;j++)
       {
           com++;
           if(a[j]<a[pos])
           {
               pos=j;
           }
       }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;

        swaps++;
    }
    for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    cout<<endl;
    cout<<"No. of comparisons = "<<com<<endl;
    cout<<"No. of swaps = "<<swaps<<endl;
}

int main()
{
        int i,n;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        selectionSort(arr,n);
    return 0;
}
