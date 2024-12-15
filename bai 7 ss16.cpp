#include <stdio.h>
void arrange(int *arr, int length)
{
	for (int i=0; i<length-1; i++)
	{
		for (int j=0; j<length-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void print(int *arr, int length)
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
 	printf ("moi ban nhap so phan tu co trong mang:");
 	scanf ("%d",&length);
 	for (int i=0; i<length; i++)
 	{
 		printf ("moi ban nhap gia tri thu %d = ",i+1);
 		scanf ("%d",&arr[i]);
	}
	printf ("phan tu khi chuwa sap xep: ");
	print(arr,length);
	printf ("\n");
	printf ("mang sau khi sap xep:");
	arrange(arr,length);
	print(arr,length);
	return 0;
 }
