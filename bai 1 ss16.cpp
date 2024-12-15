#include <stdio.h>
int main()
{
	//cach 1:
	int number=9;
	printf ("dia chi cua number %d\n",&number);
	printf ("gia tri number %d\n",number);
	//cach 2:
	int *numberptr=&number;
	printf ("dia chi cua number %d\n",numberptr);
	printf ("gia tri number %d",*numberptr);
	return 0;
}
