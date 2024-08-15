#include<stdio.h>
#define processCount 4
struct FCFS{
	char p[3];
	int ar_time;
	int b_time;
};

int main(){
int i,tat=0,wt=0,temp=0,j;
struct FCFS farr[processCount];
for(i=0;i<processCount;i++){
	printf("Value for %d process:\n",i+1);
	printf("Enter Process id: ");
	scanf("%s", &farr[i].p);
	printf("Enter Arrival time: ");
	scanf("%d", &farr[i].ar_time);
	printf("Enter Brust time: ");
	scanf("%d", &farr[i].b_time);
}  
printf("PID \t  ArrivalTime \t BrustTime \t TAT \t WT\n");
for(i=0;i<processCount;i++){
		for(j=0;j<i;j++){
		temp=temp+farr[j].b_time;
	}
		tat=(temp + farr[i].b_time) - farr[i].ar_time;
		temp=0;
		wt=tat-farr[i].b_time;
		printf("\n %s \t\t%d  \t\t%d  \t  %d \t %d \n",farr[i].p,farr[i].ar_time,farr[i].b_time,tat,wt);
	//	printf("TAT for %s is %d\n",farr[i].p,tat);
	//	printf("WT for %s is %d\n",farr[i].p,wt);
}
return 0;
}
