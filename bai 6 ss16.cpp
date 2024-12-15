#include <stdio.h>
void scan(int *arr, int length)
{
	for (int i=0; i<length; i++)
	{
		printf ("moi ban nhap so thu %d:",i+1);
		scanf ("%d",&arr[i]);
	}
}
void find(int *arr, int length, int index, int search)
{
	for (int i=0; i<length; i++)
	{
		if (arr[i]==search)
		{
			index=i;
			printf ("phan tu %d o vi tri thu %d\n",arr[i],index+1);
		}
	}
}
int main()
{
	int arr[100];
	int search,length,index;
	printf ("moi ban nhap so luwong phan tu:");
	scanf ("%d",&length);
	scan(arr,length);
	printf ("moi ban nhap so can tim: ");
	scanf ("%d",&search);
	find(arr,length,index,search); 
	return 0; 
}
