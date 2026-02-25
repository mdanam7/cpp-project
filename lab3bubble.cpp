#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
          if(arr[j]>arr[j+1])
          {
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
          }
        }
    }
}
int median(int arr[],int n){
    bubble_sort(arr,n);
    if(n%2==1){
        return arr[n/2];
    }
    else {
        return (arr[n/2]+arr[n/2-1])/2;
    }
}
int main(){
int n;
cout<<"enter n.";
cin>>n;
int arr[100];
cout<<"enter the arr";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    cout<<median(arr,n);
    return 0;
}