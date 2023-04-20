#include<stdio.h>
struct Player {
    char name[50];
    int runs;
};
int main(){
 struct Player players[11];
 int i, total_runs=0;
for(i = 0; i < 11; i++)
 {
     printf("Enter name of player %d:",i+1);
     scanf("%s",players[i].name);
     printf("Enter runs scored by %s:",players[i].name);
     scanf("%d",&players[i].runs);
     total_runs += players[i].runs;
 }
 printf("\nBatting Information:\n");
for(i = 0; i < 11; i++)
{
    printf("%s scored %d runs.\n", players[i].name,players[i].runs);
}
printf("\nTotal runs scored by the team:%d\n", total_runs);

return 0;
}
