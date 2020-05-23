#include<stdio.h>
void main()
{
    int n,s;
    printf("Enter the length of the series : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        s=i*(i+1)/2;
        printf("%d ",s);
    }
}
