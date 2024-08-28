#include<stdio.h>
int main(){
	int TM,BS,NP,NB,i;  //TM:Total memory,BS:Block Size,NP:Number of process,NB: number of Block
	int f=0;
	printf("Enter the total memory size(in Bytes): ");
	scanf("%d",&TM);
	printf("Enter the block size(in Bytes): ");
	scanf("%d",&BS);
	printf("Enter the total number of process: ");
	scanf("%d",&NP);
	int p[NB];
	for(i=0;i<NP;i++){
		printf("Enter the memory required for P%d (in Bytes): ",i+1);
		scanf("%d",&p[i]);
	}
	printf("Enter the number of block: ");
	scanf("%d",&NB);
	printf("Process\t MemoryRequired \t Allocated \t InternalFragmentation\n");
	int IF,TIF=0; //IF:Internal Fragmentation, TIF:Total Internal Fragmentation
	for(i=0;i<NP;i++){
		if(p[i]<BS){
		IF=BS-p[i];
		printf("P%d \t\t%d  \t\t Yes \t\t %d \n",i+1,p[i],IF);
		TIF=TIF+IF;
		f=f+1;	
		}
		else
		printf("P%d \t\t%d  \t\t No \t\t -- \n",i,p[i]);
		if(f==NB){
		printf("\nMemory is full,any other process cannot be accommodated. ");
		break;	
		}
	}
	printf("\nThe total internal fragmentation is: %d\n",TIF);
	printf("The total external fragmentation is: %d\n",TM-(BS*NB));
	return 0;
}
