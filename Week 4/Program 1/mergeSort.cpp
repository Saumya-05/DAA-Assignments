#include<iostream>
using namespace std;
int c = 0;

void merge(int arr[], int lb, int mid, int ub)
{
    int i,j,k;
    int n1 = mid-lb+1;
    int n2 = ub-mid;
    
    int t1[n1],t2[n2];
    
    for(i=0;i<n1;i++)
        t1[i]=arr[lb+i];
    for(j=0;j<n2;j++)
        t2[j]=arr[mid+1+j];
        
    i=0,j=0,k=lb;
    while(i<n1 && j<n2)
    {
        if(t1[i]<t2[j])
        {
            arr[k++]=t1[i];
            i++;
        }
        else
        {
            arr[k++]=t2[j];
            j++;
        }
        c++;
    }
    while(i<n1)
    {
        arr[k++]=t1[i];
        i++;
    }
    
    while(j<n2)
    {
        arr[k++]=t2[j];
        j++;
    }
}
void mergeSort(int arr[], int lb, int ub)
{
    int mid;
    if(lb<ub)
    {
        mid = (lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
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
    mergeSort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"comparison = "<<c;
    return 0;
}