#include <stdio.h>

int multiply(int x,int y); // parameteres (declaration)

int main()
{
    int cross = multiply(3, 8);
    printf("sum = %d", cross);
    return 0;
    //calling of function (argument) to the function

}

int multiply(int x, int y)
{
    return x * y; // definition (returning function)
}