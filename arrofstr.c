#include <stdio.h>
#include <string.h>
int main () {
    
    char names[10][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < rows; i++){
        printf("enter names of your family : ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    for(int j = 0; j < rows; j++){
    printf("%s\n", names[j]);
    }
    return 0;
}