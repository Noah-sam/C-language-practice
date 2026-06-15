#include<stdio.h>
     int main()
     {
        float a;
        printf("enter the number a = ");
        scanf("%f",&a);
        float b;
       printf("enter the number b = ");
       scanf("%f" ,&b);
       printf("the sum =%.3f" , a + b );
       // the .n used to minimize
       //the decimal places after the result
       return 0;
     } 