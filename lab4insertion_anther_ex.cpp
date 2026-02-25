#include<iostream>
using namespace std;
int abs(int x){
    if(x<0)
    return -x;
    return x;
}
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j =i-1;
        while(j>=0 && abs(arr[j])>abs(key))
        {
           arr[j+1]=arr[j];
           j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    int n;
    int arr[100];
    cin >> n;
    
    for(int i=0;i<n;i++){

    
    cin >> arr[i];
}
insertion_sort(arr,n);
cout<<"[";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
    if(i<n-1)
    {
        cout<<",";
    }

}
cout<<"]";
return 0;
}