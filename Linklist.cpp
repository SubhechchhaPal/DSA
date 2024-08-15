//linklist general opreations

#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;
struct node *p=NULL;
struct node *last;
//add function
void add(int n){
struct node *ptr=(struct node*) malloc(sizeof(struct node)) ;
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

//add feom first
void add_f(int n){
struct node *ptr=(struct node*) malloc(sizeof(struct node)) ;
ptr->data=n;
ptr->next=head;
head=ptr;//Added data into linklist
}

//delete from last
int del_l() {
if (head == NULL) {
printf("List is empty, nothing to delete.\n");
return 0;
}
p=head;
while(p->next->next!=NULL){
	p=p->next;
}
last=p->next;
int x=last->data;
p->next=NULL;
free(last);
return x;
}

//any specefic data delete
int del(int n) {
if (head == NULL) {
printf("List is empty, nothing to delete.\n");
return 0;
}

struct node *current = head;
struct node *previous = NULL;

// If the node to be deleted is the head
if (head->data == n) {
int x = head->data;
struct node *temp = head;
head = head->next;
free(temp);
return x;
}
// Traverse the list to find the node to delete
while (current != NULL && current->data != n) {
previous = current;
current = current->next;
}
// If the node was not found
if (current == NULL) {
printf("Element %d not found in the list.\n", n);
return 0;
}
// Node found, perform the deletion
int x = current->data;
previous->next = current->next; // Unlink the node
free(current); // Free the memory
return x;
}

//del from first
int del_f(){
	p=head;
	head=p->next;
	p->next=NULL;
	return p->data;
}

//display
void dis(){
	p=head;
	while(p!=NULL){
		printf("%d\t", p->data);
		p=p->next;
	}
}

int main(){
	int c;
    printf("To add data into the list at the end press 1: \n");
    printf("To add data into the list at the begining press 2: \n");
    printf("To delete data from the end of the list press 3: \n");
    printf("To delete data from the beging of the list press 4: \n");
    printf("To delete any data of choice from the list press 5: \n");
    printf("To display all the data from the list press 6: \n");
	printf("Press 7 to exit ");
 	while(c<=7){
 	printf("\nEnter choice: ");
	scanf("%d",&c);
    switch(c){
    	case 1:
    		int a;
		 printf("Enter element to add into the end: \n");
         scanf("%d",&a);
         add(a);
         //system("pause");
        break;
        case 2:
        	int n;
		   printf("Enter element to add at the begining of the list : \n");
           scanf("%d", &n);
            add_f(n);
        break;
        case 3:
           printf("\n%d is deleted from linklist .\n",del_l());
        break;
        case 4:
           printf("\n%d is deleted from begining from the linklist: \n",del_f());
		break;
		case 5:
			int d;
		   printf("Enter the data want to delete: \n");
           scanf("%d",&d);
	       printf("%d is deleted from the list: \n",del(d));
	    break;
	    case 6:
	    	printf("Your list is: \n");
	    	dis();
	    	break;
	    case 7:
	    	break;
	    default:
	    	printf("Enterd worng choice");
	    	break;
	}
}
	return 0;
}
