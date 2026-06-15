#include <stdio.h>
int main()
{
int j, i;
for(i=1;i<= 10 ;i++){
    printf("\n");
    for(j = 1;j <=10;j++){
        printf("%d * %d = %3d",i, j, i * j);
        printf("\n");
    }
}
return 0;
}