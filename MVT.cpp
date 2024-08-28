#include<stdio.h>
#include<stdlib.h>
struct node{
	int p,data;
	struct node *next;
};
struct node *head=NULL;
struct node *p;

void add(int i,int n){
struct node *ptr=(struct node*) malloc(sizeof(struct node)) ;
ptr->p=i;
ptr->data=n;
ptr->next=NULL;
if(head==NULL){
	head=ptr;//Added first data into linklist
}
else{
p=head;//points the next value after head
while (p->next != NULL) { // Traverse to the end of the list
p = p->next;
}
p->next = ptr;
}
}

void dis(){
	p=head;
	while(p->next!=NULL){
		printf("%d \t\t %d\n",p->p,p->data);
		p=p->next;
	}
}

int main(){
	int TM,PS,i;  //TM:Total memory,PS:Process Size
	int s=0,f=0,c,j;
	printf("Enter the total memory size(in Bytes): ");
	scanf("%d",&TM);
	i=0;
	while(s<=TM){
	printf("Enter the memory required for P%d (in Bytes): ",i+1);
	scanf("%d",&PS);
	add((i+1),PS);
	s=PS+s;
	if(s<=TM){
	printf("Memory is allocated for P%d\n",i+1);
	}
	else{
		s=s-PS;
	printf("\nMemory is full.");
	break;
	}
	printf("\nDo you want to continue(1 for Y/0 for N): ");
	scanf("%d",&c);
	if(c==1){
	i++;
	}
	else
	break;
}
printf("\nTotal Memory Available-- %d\n",TM);
printf("\nProcess \t Memoryallocation \t\n");
dis();
printf("\nTotal memory allocated: %d\n",s);
printf("Total external fragmentaion: %d",TM-s);
return 0;
}
