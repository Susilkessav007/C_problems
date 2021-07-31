#include <stdio.h>

int bubblesort(int n, int* ptr)
{
    int i, j, k;
    for(i=0; i<n; i++) 
    {
		for(j=i+1; j<n; j++) 
        {
            if (*(ptr+j) < *(ptr+i)) 
            {
                k = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = k;
            }
        }
    }    
	return 0;
}
int main()
{
    int n;
    printf("Enter no. of intergers:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    bubblesort(n, arr);
    for(int m=0; m<n; m++)
    {
		printf("%d ", arr[m]);
	}
    return 0;
}
