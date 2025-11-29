//Program to implement bubble sort
#include <iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int i=0 ; i<n-1 ; i++)
        {
            int j=i+1;
            for(j=0;j<n-i-1;j++)
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
void printarray(int arr[], int n) {
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
     {
        cout << arr[i] << " ";
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
    bubblesort(a,n);
    printarray(a,n);
    return 0;
}
