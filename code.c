#include<stdio.h>

void main()
{
    char city[5][20];
    int i,j;
  
    printf("Enter the Names(Upto-5 names) to Sort: \n\n");
    for(i=0; i<5; i++)
        scanf("%s",&city[i]);
    printf("Sorted list of Names are: \n");
    for(i=65; i<122; i++)
    {
        for(j=0; j<5; j++)
        {
            if(city[j][0]==i)
                printf("\n%s",city[j]);
        }
    }
}
