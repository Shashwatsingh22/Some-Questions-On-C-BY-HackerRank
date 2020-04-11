#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,t,sum=0,i,p;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(i=0;i<5;i++)
    {
    	t=n%10;
    	sum=sum+t;
    	n=n/10;
	}
	printf("%d",sum);
}
