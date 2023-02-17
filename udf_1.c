#include<stdio.h>

void cube(int i){
	
	printf("%d",i*i*i);
	
}

main(){
	
	int a;
	
	printf("enter number : ");
	scanf("%d",&a);
	
	cube(a);
	
}
