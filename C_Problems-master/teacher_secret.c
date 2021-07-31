#include <stdio.h>
#include <string.h>
#define MAX 20

int main() 
{
  int n, n2, keys[100], l1, l2, sum=0;
  char words[20][50], input[20][50], str[MAX];
  printf("Enter no. of keywords: ");
  scanf("%d", &n);
  printf("Enter the keywords: ");
  for(int i=0; i<n; i++)
  {
    scanf("%s", &str);
    strcpy(words[i], str);
  }
  printf("Enter the marks allotted: ");
  for(int j=0; j<n; j++)
  {
    scanf("%d", &keys[j]);
  }
  printf("Enter the number of input words: ");
  scanf("%d", &n2);
  
  printf("Enter the answer: ");
  
  for(int k=0; k<n2; k++)
  {
    scanf("%s", &str);
    strcpy(input[k], str);
  }
  
  l1 = strlen(words);
  l2 = strlen(input);
  
  for(int m=0; m< l2+2; m++)
  {
    for(int n=0; n< l1+2; n++)
    {
      if(strcmp(input[m], words[n]) == 0)
      {
        sum = sum + keys[n];
      }
    }
  }

  printf("Marks:%d\n", sum);

  return 0;
}
