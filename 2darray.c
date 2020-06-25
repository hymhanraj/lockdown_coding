#include<stdio.h>
#include<string.h>

int main()
{
    int r,r2,c,c2,temp;

    int rows = 3;
    int columns = 3;

    int a[rows][columns]; 

    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;

    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;

    a[2][0] = 7;
    a[2][1] = 8;
    a[2][2] = 9;

    r = 0;
    r2 = rows-1;

    c = 0;
    c2 = columns-1; 

    while(r<=r2){
        while(c<=c2){
            temp = a[r][c];
            a[r][c] = a[r2][c2];
            a[r2][c2] = temp;

            c++;
            c2--;
        }

        temp = a[r][c];
        a[r][c] = a[r2][c2];
        a[r2][c2] = temp;

        r++;
        r2--;

    }


    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d\n",a[r][c]);
        }
    }
}
