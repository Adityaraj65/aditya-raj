#include<stdio.h>
int main()
{
	int l,b;
	printf("enter length");
	scanf("%d", &l);
	printf("enter breadth");
	scanf("%d", &b);
	int area = l*b;
	int perimeter = 2 * (l+b);
    if(area>perimeter){
        printf("area");
    }
    if(area<perimeter){
        printf("perimeter");
    }
    else{
        printf(area=perimeter);
    }
	return 0;
}
