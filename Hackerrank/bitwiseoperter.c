#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,andAB,orAB,xorAB,a,b,max=0,max1=0,max2=0;
  for(i=1;i<5;i++)
  {a=i;
  for(j=i+1;j<=5;j++)
   {b=j;
     andAB=a&b;
     orAB=a|b;
     xorAB=a^b;
     if((andAB<k)&&(andAB>max)){max=andAB;}
     if((orAB<k)&&(orAB>max1)){max1=orAB;}
     if((xorAB<k)&&(xorAB>max2)){max2=xorAB;}
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

