#include <stdio.h>
void tong(int *num1, int *num2, int *sum)
{
	*sum=*num1 + *num2;
	printf ("tong =%d",*sum);
}
int main()
{
	int number1, number2, sum;
	printf ("moi ban nhap gai tri thu 1:");
	scanf ("%d",&number1);
	printf ("moi ban nhap gia tri thu 2:");
	scanf ("%d",&number2);
	tong (&number1,&number2,&sum);
	return 0;
}
