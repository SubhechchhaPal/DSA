//linklist_queue
#include<stdio.h>
#include<stdlib.h>
struct node{
	int a;
	struct node *next;
};
struct node *f;
struct node *r;

//addition function
void add(int n){
	struct node *ptr;
	ptr=(node*)malloc(sizeof(node));
	ptr->a=n;
	ptr->next=NULL;
	if(f==NULL){
		f=ptr;
		r=ptr;
	}
	else{
		r->next=ptr;
		r=ptr;
	}
}

//del
int del(){
	struct node *p;
   p=f;
	if(f==NULL){
	printf("Empty\n ");
    return 0;
    }
    else
    f=f->next;
	return p->a;	
}

//display
void dis(){
	struct node *dis;
	dis=f;
	if(dis==NULL)
	printf("Queue is Empty.Enter data to display.\n");
	else{
		while(dis!=r){
		printf("%d, ",dis->a);
		dis=dis->next;	
		}
	}
	printf("%d ",dis->a);	
}
//peep
void peep(){
	if(f==NULL)
	printf("Queue is Empty.Enter data to display.\n");
    else
	printf("%d",f->a);
}

int main(){
 	int c;
 	printf("Enter 1 to insert data into queue : ");
	printf("\nEnter 2 to delete element from the queue: ");
	printf("\nEnter 3 to show fist element of the queue: ");
	printf("\nEnter 4 to display the queue: ");
	printf("\nPress 5 to exit. \n");
 	while(c<=5){
 	printf("Enter choice: ");
	scanf("%d",&c);
	switch (c){
		case 1:
			int p;
			printf("Enter element: ");
			scanf("%d",&p);
			add(p);
		break;
		case 2:
			printf("%d deleted",del());
		break;
		case 3:peep();
		break;
		case 4:
		   printf("Show the queue: ");
		   dis();
	    break;
	    case 5:
	   	break;
		default:
		printf("Worng choice: ");	
	}
}
	return 0;
	
}
 
