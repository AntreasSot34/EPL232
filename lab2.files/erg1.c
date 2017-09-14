#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
int i=0;
int j=0;
	          FILE *fp ;
         char data[550];
        	 printf( "Opening the file test.c in read mode:\n" ) ;
         fp = fopen( "file.txt", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c" ) ;
                 return 1;
         }
        	 printf( "Reading the file test.c:\n" ) ;
//piani tin kathe grammi tou file
int pinakas[4]={ 0 };
int words = -1;
char array[100][100];
         while( fgets ( data, 500, fp ) != NULL ){
	pinakas[3]--;	
         	char *token;
		   token = strtok(data, " \n,.");
//kamni tokenizer tin kathe grammi tou file me to sinthimatiko "--"
		   while( token != NULL ) 
		   {
			words++;
//kani copy to token ston array[i]
			strcpy( array[j] , token);
			for( i=0;i< strlen(token); i++){
				if ( isalpha(token[i]) ) {
				    pinakas[0]= pinakas[0]+1;
				} else if (isdigit(token[i])) {
				    pinakas[1]= pinakas[1]+1;
				} else {
				    pinakas[2]= pinakas[2]+1;
				}
			}
		      j++;
		      printf( "%s\n", token );
		      token = strtok(NULL, " \n,.");
		      pinakas[3]= pinakas[3]+1;
		   }
		

	 }

         for( i=0;i<4;i++)
		printf("pin %d %d \n",i,pinakas[i]);
 printf( "words in a file:%d \n",  words );

 	for( i=0;i< strlen(array[i]);i++)
		printf( "%s\n",  array[i] );

	for( i=0;i< 100;i++){
		for( j=0;j< 99;j++){
			if( strcmp( array[j],array[j+1] )>0 ){
				char temp[100]={0};
				strcpy(temp , array[j]);
				strcpy(array[j] , array[j+1]);
				strcpy(array[j+1], temp);
			}
		}
	}
		
	for( i=0;i< 100;i++)
		printf( "%s\n",  array[i] );
         fclose(fp) ;   
	return 0;
}
