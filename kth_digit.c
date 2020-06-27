#include <stdio.h>
#include <math.h>
void kdigit(int);
main()
{
               int a,b;
               printf("enter two numbers");
               scanf("%d%d",&a,&b);
               kdigit(pow(a,b));
              
}
void kdigit(int n)
{
               int k,r;
               printf("enter k value");
               scanf("%d",&k);
               while(n>0 && k != 0)
               {
                              r=n%10;
                              n=n/10;
                              k--;
               }
              
               if((n<=0 && k != 0))
                              printf("kthdigit is not there");
               else
                              printf("kthdigit is %d",r);
              
}
