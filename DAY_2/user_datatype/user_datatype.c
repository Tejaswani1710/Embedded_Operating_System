#include<stdio.h>
#include<string.h>

typedef struct std
{
    int rollno;
    char name[30];
}std_data_t;
std_data_t PG_DESD[3];
std_data_t PG_DASSD[3];
std_data_t PG_DBDA[3];

void main()
{
    int i;

    printf("\n Enter the names of PG-DESD students: ");
    for(i=0;i<3;++i)
        {
            PG_DESD[i].rollno = i+1;
            scanf("%s",PG_DESD[i].name);
        }
    printf("\n Enter the names of PG-DASSD students: ");
    for(i=0;i<3;++i)
        {
            PG_DASSD[i].rollno = i+1;
            scanf("%s",PG_DASSD[i].name);
        }
    printf("\n Enter the names of PG-DBDA students: ");
    for(i=0;i<3;++i)
        {
            PG_DBDA[i].rollno = i+1;
            scanf("%s",PG_DBDA[i].name);
        }
    printf("\n\n *****PG_DESD list:*****");
    for(i=0;i<3;++i)
        {
            printf("\n Roll no.: %d",i+1);
            printf("\t Name: %s",PG_DESD[i].name);
        }
    printf("\n\n *****PG_DASSD list:*****");
    for(i=0;i<3;++i)
        {
            printf("\n Roll no.: %d",i+1);
            printf("\t Name: %s",PG_DASSD[i].name);
        }
    printf("\n\n *****PG_DBDA list:*****");
    for(i=0;i<3;++i)
        {
            printf("\n Roll no.: %d",i+1);
            printf("\t Name: %s",PG_DBDA[i].name);
        }
}   

