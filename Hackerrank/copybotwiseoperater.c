#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,andAB,orAB,xorAB,a,b,max=0,max1=0,max2=0;
  for(i=1;i<n;i++)
  {a=i;
  for(j=i+1;j<=n;j++)
   {b=j;
     if(((a&b)<k)&&((a&b)>max))
     {
     	max=a&b;
	 }
	 if(((a|b)<k)&&((a|b)>max))
     {
     	max1=a|b;
	 }
	 if(((a^b)<k)&&((a^b)>max2))
     {
     	max2=a^b;
	 }
    }
   }
	 
     printf("%d\n",max);
     printf("%d\n",max1);
     printf("%d",max2);
    }
   int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
}

