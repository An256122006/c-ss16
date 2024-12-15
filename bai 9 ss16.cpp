#include <stdio.h>
void print (int *arr, int length )
{
	for (int i=0; i<length; i++)
	{
		printf ("gia tri thu %d=%d\n",i+1,arr[i]); 
	} 
	printf ("\n");
} 
void add(int *arr, int *length, int addindex, int value)
{
	for (int i=*length; i>=addindex; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[addindex]=value;
	(*length)++;
 } 
int main()
{
	int arr[100];
	int addindex, value, length;
	printf ("moi ban nhap do dai mang:");
	scanf ("%d",&length);
	for (int i=0; i<length; i++)
	{
		printf ("moi ban nhap gia tri thu %d:",i+1);
		scanf ("%d",&arr[i]); 
	}
	print (arr,length);
	printf ("moi ban nhap gia tri muon them:");
	scanf ("%d",&value);
	printf ("moi ban nhap vi tri muon them:");
	scanf ("%d",&addindex); 
		if (addindex<0 || addindex>length+1)
	{
		printf ("khong hop le");
	} else{
		add(arr, &length, addindex, value);
	    print(arr,length);
	} 
	return 0; 
}
