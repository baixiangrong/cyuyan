#include<stdio.h>
#include<stdlib.h>
void main(){
    float m,lirun; 
	printf("输入当月利润:");
	scanf("%f",&m);
	if(m<=10)
	   lirun=m*0.1;
	else if(m>10 && m<=20)
	   lirun=10*0.1+(m-10)*0.075;
	else if(m>20 && m<=40)
	   lirun=10*0.1+10*7.5+(m-20)*0.05;
	else if(m>40 && m<=60)
	   lirun=10*0.1+10*7.5+20*0.05+(m-40)*0.03;
	else if(m>60 && m<=100)
	   lirun=10*0.1+10*7.5+20*0.05+20*0.03+(m-60)*0.015;
	else if(m>100)
	   lirun=10*0.1+10*7.5+20*0.05+20*0.03+40*0.015+(m-100)*0.01;
	printf("应得奖金%.2f",lirun*10000);
	
	
	float m,lirun; 
	printf("输入当月利润:");
	scanf("%f",&m);
	int x;
	x=int(m)/10;
	switch(x):
		case 0:
			lirun=m*0.1;
		case 1:
			lirun=10*0.1+(m-10)*0.075;
			break;
		case 2:
			lirun=10*0.1+(m-10)*0.075;			
			break;
		case 3:
			lirun=10*0.1+10*7.5+(m-20)*0.05;		
			break;
		case 4:
			lirun=10*0.1+10*7.5+(m-20)*0.05;			
			break;
		case 5:
			lirun=10*0.1+10*7.5+20*0.05+(m-40)*0.03;			
			break;
		case 6:
			lirun=10*0.1+10*7.5+20*0.05+(m-40)*0.03;
			
			break;
		case 7:
			lirun=10*0.1+10*7.5+20*0.05+20*0.03+(m-60)*0.015;
			
			break;
		case 8:
			lirun=10*0.1+10*7.5+20*0.05+20*0.03+(m-60)*0.015;
			
			break;
		case 9:
			lirun=10*0.1+10*7.5+20*0.05+20*0.03+(m-60)*0.015;		
			break;
		defalut:
			lirun=10*0.1+10*7.5+20*0.05+20*0.03+40*0.015+(m-100)*0.01;
		
			
	printf("奖金应为%.2f",lirun*10000);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	   
	    	
}
