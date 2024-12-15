#include <stdio.h>
void swap(int *num1, int *num2)
{
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}
int main()
{
	int number1=8;
	int number2=9;
	printf ("truoc khi doi:\n");
	printf ("number1=%d\n",number1);
	printf ("number2=%d\n",number2);
	swap(&number1, &number2);
	printf ("sau khi doi:\n");
	printf ("number1=%d\n",number1);
	printf ("number2=%d\n",number2);
	return 0;
}
