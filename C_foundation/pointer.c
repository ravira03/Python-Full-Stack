#include<stdio.h>
#include "print.c"
int main()
{
 int a;
 int* ptr;
 print("After Init.",&a,&ptr);
 ptr = &a;
 print("After Assiging.",&a,&ptr);
 a = 100;
 print("After Alter",&a,&ptr);
 return 0;
}