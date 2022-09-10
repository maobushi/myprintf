#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

void func(char *arg_1, ...) {
       va_list ap;
       va_start(ap, arg_1);
       printf("arg_1: %s", va_arg(ap,char *));
       printf("arg_2: %d\n", va_arg(ap, int));
       printf("arg_3: %lf\n", va_arg(ap, double));
   
        va_end(ap);
   
   }
   int main(void) {
       char *arg_1 = "aaaaa";
       int arg_2 = 5;
       double arg_3 = 3.14;
   
       func(arg_1, arg_2, arg_3);
   }