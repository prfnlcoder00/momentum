#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("Enter the values");
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	
	if(a>b){
		
			if(a>c){
					
					if(a>d){
								printf("A is Max");
					}
					
					else{
								printf("D is Max");
					}
					
				}
				
				 	else{
				 				printf("C is Max");
					 }
			
	}
	
	else if(b>c){
					if(b>d){
					 			printf("B is Max");
					}
					
					else{
								printf("D is Max");
					}
					
							
		
	}
	
	else if(c>d){
		
						printf("C is Max");
						
					}
					
				else{
					
						printf("D is Max");
				}
	
	
	
	
}
