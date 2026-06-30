#include <stdio.h>
struct player
{
    int jersey;
    char name[30];
    int runs;
};
struct player p[3];
void input_data()
{
    for (int i = 0; i < 3; i++){
        printf("---player %d Details---\n",i+1);
        printf("Enter the jersey number: \n");
        scanf("%d",&p[i].jersey);
        printf("Enter the Player Name: \n");
         scanf(" %[^\n]",p[i].name);
         printf("Enter the Total Runs: \n");
          scanf("%d",&p[i].runs);
            printf("\n");
}
}
void show_table()
{
int i;
printf("----------------------------------------------------------\n");
printf("JERSY\t\tNAME\t\tRUNS\n");
printf("-----------------------------------------------------------\n");
for ( i = 0; i < 3; i++)
{
   printf("%d\t\t%s\t\t%d\n",p[i].jersey,p[i].name,p[i].runs);

}
printf("=============================================================\n");

}
int main (){
    printf("== CRICKET PERFORMANCE SYSTEM ==\n\n");
    input_data();
    show_table();
}
