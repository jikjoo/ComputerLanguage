//2014170935 ÀÌÁ÷ÁÖ
#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int num1,num2,num3,num4;
	float real,img;
	int i=1;
	char op;

	printf("Number, Operator(+,-,*,/,a), Number\n");
	scanf("%d %d %c %d %d",&num1,&num2,&op,&num3,&num4);
	switch(op){
		case '+':
			real=num1+num3;
			img=num2+num4;
			break;
		case '-':
			real=num1-num3;
			img=num2-num4;
			break;
		case '*':
			real = num1*num3-num2*num4;
			img=num1*num4+num2*num3;
			break;
		case '/':
			real=(float)(num1*num3+num2*num4)/(num3*num3+num4*num4);
			img=(float)(num2*num3-num1*num4)/(num3*num3+num4*num4);
			break;
		case 'a':
			real=sqrt((float)num1*num1+num2*num2);
			i=2;
			break;
		default:
			i=0;
			
	}

	if(i==1){
		printf("(%.2f+%.2fi) %c {%.2f+%.2fi) = %.2f+%.2fi",(float)num1,(float)num2,op,(float)num3,(float)num4,real,img);
	}
	else if(i==2)
		printf("abs(%.2f+%.2fi) = %.2f",(float)num1,(float)num2,real);
	else
		printf("Wrong Operator");
	getch();
}