#include <stdio.h>
int sumOfDigits(int num)
{
int sum = 0;
        while (num > 0)
        {
                sum = sum + (num % 10);
                num = num / 10;
        }
        return sum;
}
int reverse(int num)
{
        int rev = 0;
        while (num > 0)
        {
                rev = (rev * 10) + (num % 10);
                num = num / 10;
        }
        return rev;
  }
 
int main ()
{
        int num, sum, rev;
        printf("Enter the value for num:");
        scanf("%d", &num);
        sum = sumOfDigits(num);
        if (sum < 10)
        {
                if ((sum * sum) == num)
                {
                        printf("%d is a magic number\n", num);
                } else {
                        printf("%d is not a magic number\n", num);
                }
                return 0;
        }
        rev = reverse(sum);
 
       
        if ((sum * rev) == num)
        {
                printf("%d is a magic number\n", num);
        } else {
                printf("%d is not a magic number\n", num);
        }
 
        return 0;
}
