#include <stdio.h>
int findInversionCount(int arr[], int n)
{
int inversionCount = 0,i,j;
for(i = 0; i < n - 1; i++)
{
for(j = i + 1; j < n; j++)
if (arr[i] > arr[j])
inversionCount++;
}
return inversionCount;
}
int main()
{
int n,arr[100],i;
 printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("Enter the elements in the array\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("The inversion count of the array is %d", findInversionCount(arr, n));
return 0;
}
