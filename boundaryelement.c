#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,r,c,i,j;
    printf("enter the number of rows");
    scanf("%d",&r);
    printf("enter the number of coloumn");
    scanf("%d",&c);
    printf("enter the matrix element");
    a=(int*)malloc(r*sizeof(int));
    for(i=0;i<r;i++)
        (a+i)=(int)malloc(c*sizeof(int));

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }

    i=0;int sum1=0;
    for(j=0;j<c;j++)
        sum1=sum1+((a+i)+j);

    i=r-1;int sum2=0;
    if(i!=0)
    {
        for(j=0;j<c;j++)
            sum2=sum2+((a+i)+j);
    }

    j=0; int sum3=0;
    for(i=1;i<r-1;i++)
        sum3=sum3+((a+i)+j);

    j=c-1; int sum4=0;
    for(i=1;i<r-1;i++)
        sum4=sum4+((a+i)+j);

    printf("Sum of boundary is %d",sum1+sum2+sum3+sum4);
    return 0;
}
