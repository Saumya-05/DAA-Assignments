#include<iostream>
using namespace std;

void insertSort(int a[], int n)
{
    int i,temp,pos,shifts=0;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        pos=i;
        while(pos>0 && a[pos-1]>temp)
        {
            a[pos]=a[pos-1];
            pos--;
            shifts++;
        }
        a[pos]=temp;
    }
    for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    cout<<endl;
    cout<<"No. of shifts = "<<shifts<<endl;
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
        insertSort(arr,n);
    return 0;
}