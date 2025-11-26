#include <iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while( j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    }
void askuser(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Original array: ";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}
void printarray(int arr[], int n) {
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
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
    insertionsort(a,n);
    printarray(a,n);
    return 0;
}