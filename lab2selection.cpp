#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int kth_smallest(int arr[],int n,int k)
{
    selection_sort( arr,n);
    return arr[k-1];
}
int main(){
    int arr[]={12,4,3,22,13};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<kth_smallest(arr,n,2);
    return 0;
}