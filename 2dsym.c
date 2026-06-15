#include <stdio.h>
int main()
{
int rows = 0;
int columns = 0;
char symbol = '\0';
printf("enter a symbol : ");
scanf("%c", &symbol);

printf("enter the rows : ");
scanf("%d", &rows);

printf("enter the columns  : ");
scanf("%d", &columns);

for(int i=0; i < rows; i++){
     for(int i = 0; i < columns;i++){
    printf("%c",symbol);
   }
   printf("\n");
}


return 0;
}
