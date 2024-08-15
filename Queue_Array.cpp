#include<stdio.h>
#define max 5
int f=-1,r=-1;
int a[max];
//enter
void in(int n){
	if(r==max-1)
	printf("Full");
	else if(r==-1 && f==-1){
		f=0;
		r=0;
	   a[r]=n;
     }
     else
     r=r+1;
     a[r]=n;
   } 
   //delete
 int del(){
 	int x=a[f];
 	if(r==-1 && f==-1){
	printf("Queue is empty");
	 //break;
	 return 0 ;
    }
	else if (r==f){
		//int x= a[f];
		r=-1;
		f=-1;
	return x;
	}
	else {
	 //int x= a[f];
	 f=f+1;
	return x;
   }
 }
 
 //peep form first element
void peep_f(){
	printf("%d",a[f]);
}

//peep form last element
void peep_l(){
	printf("%d",a[r]);
}

//display
 void dis(){
 	int i;
 	for(i=f;i<=r;i++)
	 printf("%d,",a[i]);
 }
 
 int main(){
 	int c;
 	printf("Enter 1 to insert data into queue : ");
	printf("\nEnter 2 to delete element from the queue: ");
	printf("\nEnter 3 to show fist element of the queue: ");
	printf("\nEnter 4 to show last element of the queue: ");
	printf("\nEnter 5 to display the queue: ");
	printf("\nPress 6 to exit. \n");
 	while(c<=6){
 	printf("\nEnter choice: ");
	scanf("%d",&c);
	switch (c){
		case 1:
			int p;
			printf("Enter element: ");
			scanf("%d",&p);
			in(p);
		break;
		case 2:
		   int q;
			q=del();
			printf("%d deleted",q);
		break;
		case 3:
		   peep_f();
		break;
		case 4:
		    peep_l();
		break;

		case 5:
		   printf("Show the queue: ");
		   dis();
	    break;
	    case 6:
	   	break;
		default:
		printf("Worng choice: ");	
	}
}
	return 0;
	
}
  
