//20141700935 ÀÌÁ÷ÁÖ
#include <stdio.h>
#include <conio.h>

main(){
	int binary, decimal=0;
	int rest,digit=1;
	int check=1,i;
	
	printf("Input a binary number: ");
	scanf("%d",&binary);
	for(i=0;binary>0 ;i++){
		rest = binary%10;
		if(rest<=1)
			decimal+=rest*digit;
		else{
			check=0;
			break;
		}
		digit *=2;
		binary /=10;

	}
	check ? printf("%d",decimal):printf("Error");
	getch();

}