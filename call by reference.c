#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
	printf("Before swapping\n");
    printf("Value of a = %d \n", a);
    printf("Value of b = %d \n", b);
    swap(&a, &b);
    printf("\nAfter swapping\n");
    printf("Value of a = %d \n", a);
    printf("Value of b = %d \n", b);
}

void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("After swapping\n");
    printf("Value of a = %d \n", *a);
    printf("Value of b = %d \n", *b);
}
