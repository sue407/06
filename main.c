#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int result;
	result = sumTwo(3,5);
	printf("%d\n",result);
	
	result = square(4);
	printf("%d\n",result);
	
	result = get_max(8,15);
	printf("%d\n",result);
}

int sumTwo(int a, int b)
{
	int sum = a+b;
	return (sum);
}

int square(int n)
{
	return (n*n);
}

int get_max(int x, int y)
{
	if ( x>y )
	 return x;
	else
	 return y;
}
