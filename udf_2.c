#include<stdio.h>

void div(int i){
	
	if(i%15==0){
		printf("  YES , it is divisible by 3 and 5 both");
		
	}else{
		
		printf("  NO , it is NOT divisible by 3 and 5 both");
	}
	
	printf("%d",i*i*i);
	
}

main(){
	
	int a;
	
	printf("enter a number : ");
	scanf("%d",&a);
	
	div(a);
	
}
