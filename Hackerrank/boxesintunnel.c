#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	int length;
	int width;
	int height;
	/**
	* Define three fields of type int: length, width and height
	*/
};

typedef struct box box;

int get_volume(box b) {
	int vol;
	vol=b.length*b.width*b.height;
	return(vol);
	/**
	* Return the volume of the box
	*/
}

int is_lower_than_max_height(box b) {
	
	                              // here b store the struct of boxes like l, w ,h
	  if(b.height<MAX_HEIGHT)
	  {
	  	return(1);                // if there is two return one after one the there is no need of if or else need for nxt return 
 	  }                             // agar uppar wala chala toh nichhe wala chali nahi sakta ..
	  if(b.height>=MAX_HEIGHT)
	  {
	  	return(0);
	  }
    	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
}

int main()
{
	int n,i;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for ( i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
