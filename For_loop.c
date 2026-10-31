1.write a program to print all number from 1 to 50
  
#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=50;i++){
		printf("%d\n",i);
	}
	return 0;
}

2 write a program to print all number from 50 to 1 
  
#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=50;i>=1;i--){
		printf("%d\n",i);
	}
	return 0;
}


3 write a program to print the sum of number from 1 to 50

  #include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<=50;i++){
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
4 write a program to print a sum of even number from 1 to 50 
  #include<stdio.h>
int main(){
	int i,sum=0;
	for(i=50;i>=1;i=i-2){
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
5 write a program to print table by taking a number from user
#include<stdio.h>
int main(){
	int i,a;
	printf("enter a no.");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",a,i,a*i);
	}
	return 0;
}
6 WAP to find the factorial of a user-defined number N using a single loop (\(N! = 1 \times 2 \times 3 \times \dots \times N\)).
