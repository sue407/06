#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	int n;
	int r;

	get_integer(n);
	get_integer2(r);
	int result;
	result = combination(n, r);
	printf("C(n,r)�ǰ�  : %d ", result);
}

int combination(int n, int r)
{
   return (factorial(n)/(factorial(n-r)*factorial(r)));
   
}

int factorial (int n)
{
	int i;
	int res =1;
	
	for(i=1; i<n; i++)
	 res = res*i;

	return (res);

}

int get_integer (int n)
{
	printf("ù��° ����n�� �Է��ϼ���  : ");
		scanf("%d", &n);
	    
	return (n);
	
}

int get_integer2 (int r)
{
	printf("�ι�° ����r�� �Է��ϼ��� : ");
	    scanf("%d", &r);
	    
	return (r);
}
