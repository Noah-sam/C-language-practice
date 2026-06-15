#include<stdio.h>
int main()
{
char name[20] = "";

printf("enter your name = ");
fgets(name , sizeof(name), stdin);
printf("your name : %s", name);

// size of function used to calculate the 
// number of digits in the string 
// without manually repeating in the fgets function
//use of fgets because scanf cannot detect "space" 
}
