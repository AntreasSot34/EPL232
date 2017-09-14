#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main(void) {

char input[15];
char output[15];
 printf("Please enter the name of the input file:\n" ) ;
 scanf( "%s",input );
 printf( "Please enter the name of the output file:\n" ) ;
 scanf("%s", output );
//diavazi to fle
	          FILE *fp ;
         
        	 printf( "Opening the file test.c in read mode:\n" ) ;
         fp = fopen( "file1.txt", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c" ) ;
                 return 1;
         }
        	 printf( "Reading the file test.c:\n" ) ;
//piani tin kathe grammi tou file
char data[500];
char array[2000][3000];
         while( fgets ( data, 150, fp ) != NULL ){
         	char *token;
		   token = strtok(data, "-#");
//kamni tokenizer tin kathe grammi tou file me to sinthimatiko "--"
		   while( token != NULL ) 
		   {
		      printf( " %s\n", token );
		      token = strtok(NULL, "-#");
		   }

	 }
         printf("Closing the file test.c") ;

         fclose(fp) ;   
	return 0;
}
