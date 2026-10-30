#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int emp_id,sec_training,activity;
	printf("ENTER YOUR EMPLOYEE_ID\n");
	scanf("%d",&emp_id);
	printf("HAVE YOU FINISHED THE TRAINING\n");
	scanf("%d",&sec_training);
	printf("ARE YOU ACTIVE\n");
	scanf("%d",&activity);
	if(emp_id==0){
		printf("ACCESS DENIED:INVALID EMPLOYEE_ID\n");
	
		
	}else if(emp_id==1&&sec_training==0){
		printf("ACCES DENIED:TRAINING REQUIRED\n");
		
}else if(emp_id==1&&sec_training==1&&activity==0){
	printf("ACCESS DENIED:ACCOUNT INACTIF\n");
}else {
	printf("ACCESS GRANTED");
}



		
		
	
	return 0;
}