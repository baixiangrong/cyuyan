#include<stdio.h>
#include<stdlib.h>
void main(){
	int array[4];
	printf("����������4������,����Ϊ���Զ�����:");
	int i,j;
	int temp;
	for(i=0;i<4;i++){
		printf("������%d������",i+1);		
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
     
	printf("���������");
	for(i=0;i<4;i++){
		printf("%d ",array[i]);
	}
		
}
