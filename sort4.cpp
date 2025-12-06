//program for implementing mergesort
#include <iostream>
using namespace std;

void merge(int arr[],int st , int mid , int end)
{
     int temp[end-st+1];
     int i=st;
     int j=mid+1;
     int k=0;
     while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
           temp[k++]=arr[j++];
     }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=end){
        temp[k++]=arr[j++];
    }
    for(int i=0 ; i<k ; i++){
        arr[st+i]=temp[i];
    }
}
void mergesort(int arr[],int st , int end)
{
     if(st>=end) return;
     int mid=(st+end)/2;
     mergesort(arr,st,mid);
     mergesort(arr,mid+1,end);
     merge(arr,st,mid,end);    

}
void askuser(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "Original array: ";
    for (int j = 0; j < n; j++) 
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}
void printarray(int arr[],int n)
{
    cout <<"Sorted array: ";
    for(int i=0 ; i<n ; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the no. of element in an array:";
    cin >> n;
    int a[n];
    askuser(a,n);
    mergesort(a,0,n-1);
    printarray(a,n);
    return 0;
}