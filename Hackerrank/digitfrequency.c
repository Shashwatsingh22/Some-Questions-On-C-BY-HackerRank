#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char s[1000], i;int j,t,n;             // asci codes we can check that string from 0 to 9 so asci code 
scanf("%s",s);                                 // so asci codes for 0=48,1=49,2=50..................,9=57   
n=strlen(s);                                   //here we are test from the character so the i should also be treated as 
for(i=48;i<=57;i++)                            // character so we need to convert the i to the charcter for that we need  
     {  t=0;  // to declare the i as a character. so in  i each every elemen treated as character so 1=48 as character
	for(j=0;j<n;j++)
	{ 
		if(s[j]==i)
			t++;
    }
	printf("%d ",t);
    }/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
}


