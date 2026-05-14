#include <stdio.h>
#include <string.h>
int main()

{
    int num1, num2;
    int *ptr1, *ptr2;
    printf("enter a num1:");
    scanf("%d", &num1);
    printf("enter a num2:");
    scanf("%d\n", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    printf("%p\n", ptr1);
    printf("%p\n", ptr2);

    int sum = *ptr1 + *ptr2;
    printf("%d\n", sum);

    return 0;
}
