#include <stdio.h>
#include <string.h>
void dao(char *input, char *reverse)
{
	for (int i=0; i<strlen(input); i++)
	{
		reverse[i]=input[strlen(input)-1-i];
	}
}
int main()
{
	char inputString[100];
	char reverseString[100];
	printf ("moi nhap chuoi:");
	fgets(inputString,100,stdin);
	printf ("chuoi ban dau : %s",inputString);
	inputString[strcspn(inputString, "\n")] = '\0';
	dao(inputString,reverseString);
	printf ("chuoi dao nguoc : %s",reverseString);
}
