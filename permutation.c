#include <stdio.h>
	#include <string.h>
	 
	void swap(char *x, char *y)
	{
	    char temp;
	    temp = *x;
	    *x = *y;
	    *y = temp;
	}
	 
	void permutation(char *a, int l, int r)
	{
	   int i;
	   
	   if (l == r)
	     printf("%s\n", a);
	   else
	   {
	       for (i = l; i <= r; i++)
	       {
	          swap((a+l), (a+i));
	          permutation(a, l+1, r);
	          swap((a+l), (a+i));
	       }
	   }
	}
	 
	int main()
	{
	    char string[20];
	    int n;
	    
	    printf("Enter a string: ");
	    scanf("%s", string);
	    
		n = strlen(string);
	    permutation(string, 0, n-1);
	    
		return 0;
	}

