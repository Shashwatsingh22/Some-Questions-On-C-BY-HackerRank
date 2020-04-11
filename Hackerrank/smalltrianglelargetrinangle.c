 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {	/**
	* Sort an array a of the length n
	*/
	int i,k; float s,p,area[n],temp;
     triangle temp1;
	for(i=0;i<n;i++)
	{
		p=(tr[i].a+tr[i].b+tr[i].c)/2.0;      //here we write the 2.0 because the actual value of is float thats 
		                                                    //we need to write
		s=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
         area[i]=s;  
	}
	for(k=1;k<n;k++)
	{
		for(i=0;i<n-k;i++)
		{
		
		  if(area[i]>area[i+1])
		  {
			temp=area[i];
			area[i]=area[i+1];
			area[i+1]=temp;
			 
			 temp1=tr[i];
			 tr[i]=tr[i+1];
			 tr[i+1]=temp1;
		}
	}
}
	
}

int main()
{
	int n,i,p;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for ( i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for ( i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
