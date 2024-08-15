#include<stdio.h>
#include<string.h>
#define processCount 3

struct FCFS{
	char p[3];
	int ar_time=0;
	int b_time;
	int pri;
};

/*struct gantt{
	char id[3];
};*/

int main(){
int i,tat=0,wt=0,f=0,j,k;
struct FCFS temp;

struct FCFS farr[processCount];
for(i=0;i<processCount;i++){
	printf("Value for %d process:\n",i+1);
	printf("Enter Process id: ");
	scanf("%s", &farr[i].p);
//	printf("Enter Arrival time: ");
//	scanf("%d", &farr[i].ar_time);
	printf("Enter Brust time: ");
	scanf("%d", &farr[i].b_time);
	printf("Enter Priority 0-10(10 being least): ");
	scanf("%d", &farr[i].pri);
}  

 for(i=0;i<processCount-1;i++){
	for(k=0;k<processCount-i-1;k++){
		 if(farr[k+1].pri < farr[k].pri) {
                temp = farr[k];
                farr[k] = farr[k+1];
                farr[k+1] = temp;
            }
		}
	}
printf("\nGANTT Chart for Entered Processes\n");	
for(j=0;j<processCount;j++){
	printf("%s ",farr[j].p);
}	

printf("\n PID \t BrustTime \tPriority \tTAT \t WT\n");
	for(i=0;i<processCount;i++){
		for(j=0;j<i;j++){
		f=f+farr[j].b_time;
	}
		tat=(f + farr[i].b_time) - farr[i].ar_time;
		f=0;
		wt=tat-farr[i].b_time;
		printf("\n %s \t\t%d \t  %d  \t\t %d \t %d \n",farr[i].p,farr[i].b_time,farr[i].pri,tat,wt);
		//printf("TAT for %s is %d\n",farr[i].p,tat);
		//printf("WT for %s is %d\n",farr[i].p,wt);
}
return 0;
}
