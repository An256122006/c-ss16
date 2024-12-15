#include <stdio.h>
void print(int *arr,int length)
{
	for (int i=0; i<length; i++)
	{
		printf ("%d ",arr[i]);
	}
}
int main()
{
	int arr[100];
	int length;
	printf ("moi ban nhap do dai mang:");
	scanf ("%d",&length);
	for (int i=0; i<length; i++)
	{
		printf ("moi nhap gia tri thu %d:",i+1);
		scanf ("%d",&arr[i]);
	}
	print(arr,length);
	return 0;
}
