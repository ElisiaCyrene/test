#include <stdio.h>
#include "log.h"

int writeBiteData(LList *lptr){
	FILE *fptr = fopen("/home/yao/test/data/students.dat","wb");
	if(!fptr){
		return 1;
	}
	LList *temp = lptr;
	int count  = 0;
	if(!temp->data){
		return 2;
	}
	Student *stu = (Student *)temp->data;
	if(temp->next == temp){
		fwrite(stu,sizeof(Student),1,fptr);
		fclose(fptr);
		return 0;
	}
	do{
		count++;
		temp = temp->next;
	}while(temp != lptr);
	fwrite(stu,sizeof(Student),count,fptr);
	fclose(fptr);
	return 0;
}
