#include<stdio.h>
void main()
{
	int a,b,i,c,d,g,h;
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
    i=a&b;
    c=a|b;
    d=a^b;
    g=a<<2;
    h=a>>2;
    printf("the value of a&b is %d\n",i);
    printf("the value of a|b is %d\n",c);
    printf("the value of a^b is %d\n",d);
    printf("the value of a<<2 is %d\n",g);
    printf("the value of a>>2 is %d\n",h);
}
