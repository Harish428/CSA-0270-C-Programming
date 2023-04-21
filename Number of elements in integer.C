#include<stdio.h>
#include<math.h>
int main()
{
    int num,count;
    printf("Enter an integer:");
    scanf("%d", &num);
    count = floor(log10(abs(num))) + 1;
    printf("The number of digits in the integer is:%d\n", count);
    return 0;
}
