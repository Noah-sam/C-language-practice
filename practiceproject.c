#include <stdio.h>
#include <string.h>

int main ()
{
    char black[50] = "";
    char e911[50] = "";
    char men[50] = "";
    char reinforcement[50] = "";

  printf("911 whats your emergency : ");
  fgets(e911, sizeof(e911), stdin);
  //this is to remove any input buffer
  black[strlen(e911) - 1] = '\0';

  printf("how many black people : ");
  fgets(black, sizeof(black), stdin);
  black[strlen(black) - 1] = '\0';

  printf("what were they doing : ");
  fgets(men, sizeof(men), stdin);
  black[strlen(men) - 1] = '\0';

  printf("what tpye of reinforcement do you need : ");
  fgets(reinforcement, sizeof(reinforcement), stdin);
  black[strlen(reinforcement) - 1] = '\0';


  printf("%s\n", e911);
  printf("%s\n", black);
  printf("%s\n",men);
  printf("%s\n", reinforcement);

   printf("there was a %s where %s black men were %s and the civilian needs %s ", e911,black,men,reinforcement); printf("there was a %s where %s black men were %s and the civilian needs %s ", e911,black,men,reinforcement);
   
return 0;
}
 

