#include<stdio.h>
int main()
{
 int x=27;
 printf("initially x=%d\n", x);
 int *ptr;
 ptr=&x;
 *ptr=30;
 printf("after changing x=%d", x);
}
