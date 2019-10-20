#include<stdio.h>
void swap(int a, int b);
int main()
{
	int x, y;
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
	swap(x,y);
	printf("a=%d b=%d\n",x,y);
}

void swap(int a, int b)
{
	int z;
	z=a;
	a=b;
	b=z;
	printf("x=%d y=%d \n",a,b);
}
