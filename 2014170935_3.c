//2014170935 이직주
#include <stdio.h>
#include <conio.h>

main(){
	int num, total=0;
	int i,j;
	int check=0;
	int yaksu;

	printf("Prime nubmers under?");
	scanf("%d",&num);

	for(i=2;i<=num;i++){
		yaksu=1;
		for(j=1;j<i;j++){
			if(i%j==0) yaksu++ ;
		}
		if(yaksu<3) {
			printf("%d\n",i);
			total++;
		}
	}
	printf("Total number is %d",total);
	getch();
}
/* 500이하의 소수의 개수는 95개이다.*/