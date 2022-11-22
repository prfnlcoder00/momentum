#include<stdio.h>

main(){
	
	float amt, surcharge, totalbill;
	
	int unit;
	
	printf("Enter bill amt: ");
	scanf ("%d", &unit);
	
	if(unit<=50){
		
				amt= unit*0.50;
	}
	
	else if(unit<=150){
				
				amt= 25+((unit-50)*0.75);
	}
	
	else if(unit<=250){
		
				amt= 100+ ((unit-150)*1.20);
	}
	
	else if(unit>250){
		
				amt= 220 + ((unit-250)*1.50);
	}
	
	surcharge= amt*0.20;
	
	totalbill = amt + surcharge;
	
	printf("Total E Bill is %0.2f", totalbill);
	
	
	
	
	
	
}
