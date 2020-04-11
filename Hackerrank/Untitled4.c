#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k,t=n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
  	for(i=1;i<=n+(n-1);i++)
  	  {
  	    for(j=i-1;j<n-1;j++)
  	      {printf(" ");
	      for(k=1;k<n+(n-1);k++)
		   {printf("*");
            }
			} 
		   	printf("\n");
		   }
	      
	   
    return 0;
}


