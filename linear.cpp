//program to impliment linear search
#include <iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
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

int main(){
    int n,key;
    cout << "Enter the no. of element in an array:";
    cin >> n;
    int a[n];
    askuser(a,n);
    cout << "Enter the element you want to find" << endl;
    cin >> key;
    int index = linearsearch(a, n, key);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}