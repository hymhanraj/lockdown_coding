include <iostream>  
using namespace std;
void moveZerosToEnd(int arr[], int n)  
{  
    int j=0, temp, i; 
    for(i=0;i<n;i++) 
    { 
        if(arr[i]!=0 && arr[j]==0) 
            { 
             swap(arr[i],arr[j]); 
            } 
        if(arr[j]!=0) 
            j+=1; 
    } 
}  
   
void printArray(int arr[], int n)  
{  
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
}  
int main()  
{  
    int arr[] = {8, 9, 0, 1, 2, 0, 3};  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    cout << "Original array: ";  
    printArray(arr, n);  
  
    moveZerosToEnd(arr, n);  
  
    cout << "\nModified array: ";  
    printArray(arr, n);  
  
    return 0;  
}
