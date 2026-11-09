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
#include <stdio.h>
void main(){
	int a,i,fac=1;
	printf("enter a number");
	scanf("%d",&a);
	for(i=a;i>=1;i--){
		fac=fac*i;
	}
	printf("%d",fac);
	
}
7 WAP to print odd number from 1 to 50 without using any operator or other formula in other line
#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=50;i=i+2){
		printf("%d\n",i);
		
	}
	return 0;
}
8.WAP to print multiple of 3 through scanf take number from user and print multiple of 3 only
	
#include<stdio.h>
int main(){
    int i, a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(i = 1; i <= a; i++){
        if(i % 3 == 0){
            printf("Multiple of 3\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
9.Write a program to accept an integer \(N\) from the user and print all of its mathematical factors using a single loop.
	
#include <stdio.h>
int main(){
	int i,a;
	printf("enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf("%d\n",i);
		}
	}
	return 0;
}
10.WAP to print all numbers from 1 to 100, but for multiples of 7, print 'Boom' instead of the number
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 7 == 0) {
            printf("Boom\n"); // Jab 7 ka table aayega
        } else {
            printf("%d\n", i); // Baaki saare normal numbers ke liye
        }
    }
    return 0;
}

11.WAP to print table by taking number from user in reverse order
#include<stdio.h>
int main(){
	int i,a;
	printf("enter a number");
	scanf("%d",&a);
	for(i=10;i>=1;i--){
		printf("%d X %d = %d\n",a,i,a*i);
	}
	return 0;
}
12.WAP to print serial number,square and cube of number

#include<stdio.h>
int main(){
	int i,a,b;
	printf("serial number\n");
	for(i=1;i<=10;i++){
		printf("%d\n",i);
	}
	printf("square of number\n");
	for(a=1;a<=10;a++){
		printf("%d\n",a*a);
	}
	printf("cube of number\n");
	for(b=1;b<=10;b++){
		printf("%d\n",b*b*b);
	}
	return 0;
}

13.WAP to print fibonacci series(0,1,1,2,3,5,8...)

14.WAP to print year number between 2000 to 2050 which is leap year
#include<stdio.h>
int main(){
	int i;
	for(i=2000;i<=2050;i++){
		if(i%4==0){
			printf("%d is leap year\n",i);
		}
	}
	return 0;
}
15.WAP to take 4 digit number from user and print their reversed number
