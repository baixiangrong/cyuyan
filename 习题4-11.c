#include<stdio.h>
#include<stdlib.h>
void main(){
	int array[4];
	printf("请依次输入4个整数,将会为你自动排序:");
	int i,j;
	int temp;
	for(i=0;i<4;i++){
		printf("请输入%d个数字",i+1);		
		scanf("%d",&array[i]);
	}		
	
	for(i=0;i<4;i++)
	   for(j=0;j<4;j++){	   	      		  
		  if(array[i]<array[j]){		
		   temp=array[i];
		   array[i]=array[j];
		   array[j]=temp;	
	      }
        }
     
	printf("接下来输出");
	for(i=0;i<4;i++){
		printf("%d ",array[i]);
	}
		
}
