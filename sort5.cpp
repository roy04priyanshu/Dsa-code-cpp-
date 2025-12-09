//program for implementing quicksort
#include <iostream>
using namespace std;


int partition(int arr[], int st, int end) {
    int pivot = arr[st];
    int i = st + 1;
    for (int j = st + 1; j <= end; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[st], arr[i - 1]);
    return i - 1;
}
void quicksort(int arr[], int st, int end) {
    if (st >= end) return;
    int p = partition(arr, st, end);
    quicksort(arr, st, p - 1);
    quicksort(arr, p + 1, end);
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
    quicksort(a,0,n-1);
    printarray(a,n);
    return 0;
}
