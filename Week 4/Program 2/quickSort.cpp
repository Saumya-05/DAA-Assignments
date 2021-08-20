#include<iostream>
using namespace std;
int s = 0;
int c=0;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int divideByPivot(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb, end = ub;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
            c++;
        }
        while(arr[end]>pivot)
        {
            end--;
            c++;
        }
        
        if(start<end)
        {
            swap(arr[start],arr[end]);
            s++;
        }
    }
    swap(arr[lb],arr[end]);
    s++;
    return end;
}

void quickSort(int arr[], int lb, int ub)
{
    int partition;
    if(lb<ub)
    {
        partition = divideByPivot(arr,lb,ub);
        quickSort(arr,lb,partition-1);
        quickSort(arr,partition+1,ub);
    }
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
    quickSort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparisons = "<<c<<endl;
    cout<<"Swaps = "<<s<<endl;
    return 0;
}