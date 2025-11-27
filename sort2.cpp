//program to implement selection sort
#include <iostream>
using namespace std;

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap arr[i] and arr[min_idx]
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
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
    selectionsort(a,n);
    printarray(a,n);
    return 0;
}