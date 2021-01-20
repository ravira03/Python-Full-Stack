void print(char* s,int* a,int **ptr){
 printf("\n%s\n",s);
 printf("\na = %d",*a);
 printf("\n&a = %x",a);
 printf("\nptr = %x",*ptr);
 printf("\n&ptr = %x",ptr);
 printf("\n*ptr = %d",**ptr);
 printf("\n&(*ptr) = %x\n",*ptr);
 }