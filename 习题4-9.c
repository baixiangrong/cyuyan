#include <stdio.h>
int main()
{
int number;
int ws;
int k1;
int k2;
int k3;
int k4;
int k5;
printf("������һ��С����λ�������� ");
scanf("%d",&number);
if (number>9999)
{
ws=5;
}
else if(number>999)
{
ws=4;
}
else if(number>99)
{
ws=3;
}
else if(number>9)
{
ws=2;
}
else 
{
ws=1;
}
printf("���������Ϊ��%d\n",ws);
k1=number/10000;
	k2=number/1000%10;
	k3=number/100%10;
k4=number/10%10;
	k5=number%10;
	if (ws==5){
printf("�������������ÿһλ����Ϊ��%d,%d,%d,%d,%d\n",k1,k2,k3,k4,k5);
		printf("�������������������Ϊ��%d%d%d%d%d\n",k5,k4,k3,k2,k1);
	}else if(ws==4){
		printf("�������������ÿһλ����Ϊ��%d,%d,%d,%d\n",k2,k3,k4,k5);
		printf("�������������������Ϊ��%d%d%d%d\n",k5,k4,k3,k2);
	}else if(ws==3){
		printf("�������������ÿһλ����Ϊ��%d,%d,%d\n",k3,k4,k5);
		printf("�������������������Ϊ��%d%d%d\n",k5,k4,k3);
	}else if(ws==2){
		printf("�������������ÿһλ����Ϊ��%d,%d\n",k4,k5);
		printf("�������������������Ϊ��%d%d\n",k5,k4);
	}
	else{
		printf("�������������ÿһλ����Ϊ��%d\n",k5);
		printf("�������������������Ϊ��%d\n",k5);
	}
   return 0;
}
