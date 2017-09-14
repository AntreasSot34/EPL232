#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[] ) {
//entoli apo arguments ./execu -d inputfile outfile
	if( strcmp(argv[1],"-d") == 0 ){
  char input[100];
	strcpy(input , argv[2]  );
 char output[100]; 
	strcpy(output , argv[3] );
char data[500];
char array[500][500];	   
    FILE *fp ;
         fp = fopen(input, "r" ) ;
         if ( fp == NULL ){
                 printf( "Could not open file ergasia.c\n" ) ;
          }       
         
        else{	
		printf("mpike sto file!!");
//piani tin proti grammi

int j=0;
         while( fgets ( data, 500, fp ) != NULL ){
         	char *token;
		   token = strtok( data, " \t\r\n");
		   while( token != NULL ) 
		   {
		/*	//for( i=0;i< strlen(token); i++){
			int size = strlen(token);
				if ( strcmp(token[0],"(") == 0 && strcmp(token[size-1],")")== 0 ) {
			        strcpy(array[j], "(");
				strcpy(array[j+1], strtok(NULL, "()"));
				strcpy(array[j+2], ")");
				 
				}
				else if( strcmp(token[size-1],",")==0 || strcmp(token[size-1],".")==0 || strcmp(token[size-1],"!")==0 ||
	  strcmp(token[size-1],"?")==0 || strcmp(token[size-1],"\'")==0 || strcmp(token[size-1],"\"")==0
	|| strcmp(token[size-1],":")==0 ) {
			char character=token[size-1];
			strcmp(array[j] ,strtok(NULL, character) );
			strcmp(array[j+1],character);		   
					
				} else {
		      strcpy( array[j] , token);
		      token = strtok(NULL, " \t\r\n");
		   }*/
		 token = strtok(NULL, " \t\r\n");
		 strcpy( array[j] , token);
		 j++;
	    }//	while token
	 }//while fgets
int i;

for( i=0;i< 500;i++)
		printf( "%s\n",  array[i] );
}//else
	int i;	
        fclose(fp) ; 
 fp = fopen(output, "w" ) ;
 for (i=0;i< strlen(array[i]) != 0;i++)
	fprintf(fp, "%s" , array[i]);
 
}//IF argv[1] 
	return 0;
}//main
