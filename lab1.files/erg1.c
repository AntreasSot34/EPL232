/** @file sample-lab2.c
 *  @brief A sample program to illustrate some concepts fro EPL132-Lab2
 *
 *  This program implements a crazy way to print to standard output
 *
 *  @author Pyrros Bratskas
 *  @bug No known bugs.
 */

#include <stdio.h>   /* needed for printf(), scanf(), sprintf() */
#include <string.h>  /* needed for strlen() */
#include <unistd.h>  /* needed for write() */

#define MAX  10


main() {
  float a,b;
  char c;
  printf("dose praxi:\n");
  scanf("%f%c%f",&a,&c,&b);
   switch(c){
   case  '+': printf("%f\n",a+b);
     break;
  case  '-':
             printf("%f\n",a-b);
	     break;
  case  '/':
             printf("%3.3f", a/b );
	     break;
  case  '*':
             printf("%f\n",a*b);
	     break;
  }
  printf("dose praxi:\n");
  scanf("%d%d",&a,&b);
  if(a > b){
     printf("%d\n", a/b);
     printf("%d\n", a%b);
  }   
  else{
    printf("%d\n", b/a);
    printf("%d\n", b%a);
  }
}
