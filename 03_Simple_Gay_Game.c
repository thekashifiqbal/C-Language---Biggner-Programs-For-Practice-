#include <stdio.h>
#include <stdlib.h>

int main() 
{
       char Color[20];
       char PlulalNoun[20];
       char Celebrity[20];

       printf("Enter a color: ");
       scanf("%s", Color);
       printf("Enter a plural noun: ");
       scanf("%s", PlulalNoun);
       printf("Enter a celebrity: ");
       scanf("%s", Celebrity);
       
	printf("Roses are %s,\n", Color);
       printf("%s are blue,\n",PlulalNoun);
       printf("Sugar is %s,\n",Celebrity);
       return 0;
}
