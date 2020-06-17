#include <stdio.h>
int count(int n) 
{ 
	if (n < 3) 
		return n; 
	if (n >= 3 && n < 10) 
	return n-1;
	int p = 1; 
	while (n/p > 9) 
		p = p *10;
	int msd = n/p; 
	if (msd != 3)
	return count(msd)*count(p - 1) + count(msd) + count(n%p); 
	else
	return count(msd*p - 1); 
} 
int main() 
{ 
	printf ("%d ", count(578)); 
	return 0; 
} 
