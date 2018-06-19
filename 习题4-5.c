include "stdio" 
include "math.h" 
int main()
{
	double number;
	double genhaonumber;
	printf("请输入一个小于1000的数字")；
	scanf("%f",&number);
	 if(number>1000);
	 {printf("请重新输入") ；
	 	scanf("%f",&number);
	 	genhaonumber=sqrt(number);}
	 	else 
	 	{ 	genhaonumber=sqrt(number);
	 	}
		 printf("&2.0f",genhaonumber);
		 return 0;
}
