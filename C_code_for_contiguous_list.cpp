#include<stdio.h>
int arr[50],size=0,cap=50,index=0,i;
int IsEmpty();
int IsFull();
void Insert(int item);
void Insertat(int index,int item);
void Deleteat(int index,int item);
void Delete();
void Display();

int main(){
	int a,item,index;
	do{
	printf("Enter choice:\n1.Insert\n2.Insertat\n3.Deleteat\n4.Delete\n5.Display\n6.Exit");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Enter element:");
			scanf("%d",&item);
			Insert(item);
			break;
		case 2:
			printf("Enter element:");
			scanf("%d",&item);
			printf("Enter index:");
			scanf("%d",&index);
			Insertat(index,item);
			break;
		case 3:
			printf("Enter element:");
			scanf("%d",&item);
			printf("Enter index:");
			scanf("%d",&index);
			Deleteat(index,item);
			break;
		case 4:
		 Delete();
		case 5:
			Display();
		default:
			printf("enter valid num");
			
			
	}
}while(a!=6);
	
	
	return 0;
}
int IsEmpty(){
	return (size==0);
}
int IsFull(){
	return size==cap;
}
void Insert(int item){
	arr[size]=item;
	size++;
	
}
void Insertat(int index,int item){
	if(IsFull()){
		printf("Array is full");
	}else if(index<size){
		for(i=size;i>index;i--){
			arr[i]=arr[i-1];
		}
		arr[index]=item;
		size++;
	}
}
void Deleteat(int index,int item){
	if(IsEmpty()){
		printf("Array is empty");
	}else if(index<size){
		for(i=index;i<(size-1);i++){
			arr[i]=arr[i+1];
		}
		size--;
	}
}
void Delete(){
	arr[size-1]=0;
	size--;
}
void Display(){
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
		printf("\n");
	}
}
