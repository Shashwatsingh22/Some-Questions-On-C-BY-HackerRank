#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int b=0,g=0,i;
  for (i = 0; i < number_of_students; i++) {
        printf("%d",marks[i]);}
  
    if(gender=='b')
  { for (i= 0; i< number_of_students; i++)
  {	if(i%2==0)
  	b=b+marks[i];
  } 
  }
     if (gender=='g');
	{ for (i= 0; i< number_of_students; i++)
		{
		  if(i%2!=0)
		g=g+marks[i];
	   }
	  
    } 
	if(gender=='g')
	return(g);
	else
    return(b);
}

int main() {
    int number_of_students;
    char gender;
    int sum,student;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    for (student = 0; student < number_of_students; student++) {
        printf("%d",marks[student]);}
    
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
