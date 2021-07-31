#include <stdio.h>
#include <string.h> 
#define MAX 20
int main() 
{
	int n=0;
	char str1[20], str2[20];
	
	fgets(str1, MAX, stdin);
	fgets(str2, MAX, stdin);
	
	while(str1[n]==str2[n] && str1[n]!='\0')
	{
		n++;
	}
	if (str1[n] > str2[n])
	{
		printf("First");
	}
	else if(str1[n] < str2[n])
	{
		printf("Second");
	}
	else
	{
		printf("Equal");
	}
	return 0;
}
