#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
  	for(i=1;i<=n+(n-1);i++)
  	  {
  	  	for(j=1;j<i;j++)
  	  	  {
  	  	  	printf(" ");
  	  	  	{
  	  	  		for(k=1;k<=n+(n-1);k++)
  	  	  		 {
  	  	  		 	 intf("*");
					   }
				  }
			  } printf("\n");
	       }
}


