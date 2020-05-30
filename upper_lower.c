#include <stdio.h>
void main()
{
    char inputString[100];
    int upperCount,lowerCount,specialCount,digitCount,i;
    printf("Enter a String : ");
    gets(inputString);
    printf("String input is %s ",inputString);
    upperCount = lowerCount = specialCount = digitCount = 0;
    for(i =0; inputString[i]!= '\0'; i++){
      if(inputString[i] >= 'A' && inputString[i] <= 'Z'){ upperCount ++; }
     else if(inputString[i] >= 'a' && inputString[i] <= 'z'){ lowerCount ++; }
     else if(inputString[i] >= '0' && inputString[i] <= '9'){digitCount ++;}
     else{
        specialCount ++;
      }
    }
    printf("\nUpper case count : %d \n",upperCount);
    printf("Lower case count : %d \n",lowerCount);
    printf("Digit count : %d \n",digitCount);
    printf("Special character count : %d \n",specialCount);
}
