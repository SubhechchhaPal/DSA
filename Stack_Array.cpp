#include<stdio.h>
#define max 5
int t=-1;
int a[max];
//enter
void in(int n){
	if(t==max-1)
	printf("Full");
    else
     t=t+1;
     a[t]=n;
   } 
   //delete
 int del(){
 	int x=a[t];
 	if(t==-1){
	printf("Queue is empty\n");
	 //break;
	 return 0 ;
    }
	else {
	 //int x= a[f];
	 t=t-1;
	return x;
   }
 }
 
//peep
void peep(){
	printf("%d",a[t]);
}
//display
void dis(){
 	int i;
 	for(i=0;i<=t;i++)
	 printf("%d ",a[i]);
 }
 
 int main(){
 	int c;
 	printf("Enter 1 to insert data into stack : ");
	printf("\nEnter 2 to delete element from the stack: ");
	printf("\nEnter 3 to show fist element of the stack: ");
	printf("\nEnter 4 to display the stack: ");
	printf("\nPress 5 to exit. \n");
 	while(c<=5){
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
			//printf("delete element: ");
			//scanf("%d",&q);
			q=del();
			printf("%d deleted from stack",q);
		break;
		case 3:
		    peep();
		break;
        case 4:
		   printf("Show the stack: ");
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
  

