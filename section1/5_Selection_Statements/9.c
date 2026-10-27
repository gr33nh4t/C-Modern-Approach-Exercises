#include <stdio.h>

int main(void){
	// Write a program that take two dates then displays which is earlier
	
	int m1,d1,y1,m2,d2,y2;
	printf("Enter first date (mm/dd/yy):\n");
	scanf("%d /%d /%d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy):\n");
	scanf("%d /%d /%d", &m2, &d2, &y2);

	if (y1<y2){printf("%d/%d/%d is earlier than %d/%d/%d\n",m1,d1,y1,m2,d2,y2);}
	else if (m1<m2){printf("%d/%d/%d is earlier than %d/%d/%d\n",m1,d1,y1,m2,d2,y2);}
	else if (d1<d2){printf("%d/%d/%d is earlier than %d/%d/%d\n",m1,d1,y1,m2,d2,y2);}
	else if (y1==y2 && m1==m2 && d1==d2){printf("%d/%d/%d is the same as %d/%d/%d\n",m1,d1,y1,m2,d2,y2);}
	else {printf("%d/%d/%d is earlier than %d/%d/%d\n",m2,d2,y2,m1,d1,y1);}

}
