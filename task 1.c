#include<stdio.h>

main(){
	
	char a;
	
	printf("Enter the input value: ");
	scanf ("%c",&a);
	
	if((a>= 'a') && (a<= 'z') || (a>= 'A') && (a<= 'Z')){
		
				printf("It is an Alphabet");
				
			 }
			 
			 else if ( (a>= '0') && (a<= '9') ){
			 	
			 	printf ("It is a Number");
			 }
			 
			 
			 else{
			 	
			 	printf("It is a special character");
			 }                  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
