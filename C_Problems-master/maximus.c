#include <stdio.h>

int main() 
{
	int a, b, c, n;
	int sum=0;
	scanf("%d %d %d %d", &a, &b, &c, &n);

	
	for(int i=0; i<n; i++)
	{
		if(a>=b && a>=c)
		{
			sum=sum+a;
			a--;
		}
		else if(b>=a && b>=c)
		{			
			sum=sum+b;
			b--;
		}
		else if(c>=a && c>=b)
		{
			sum=sum+c;
			c--;
		}		
	} 
	
	printf("%d", sum);
   
	return 0;
}
