#include<stdio.h>
#include"firstclass.h"
#include"economicclass.h"
int main(void)
{
    int c=0, p=0;
    int s[100] = {0};
    printf("**Welcome to SMALL AIRLINE SEAT  Reservations System**\n\n");

    do
    {
        for (int i = 0; i < 100; i++)
        {
        	printf("%d",s[i]);
            if (i == 19 || i == 39 || i == 59 || i == 79)
                printf("\n");
            /* code */
        }
         printf("\n");
        printf("Choose 1 for First Class 2 for economic: enter any digit to exit\t");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
          Firstclass(s);
            break;
        case 2:
          Economicclass(s);
         break;
            
        }
    } while (c==1||c==2);
    return 0;
}


