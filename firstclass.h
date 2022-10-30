void Firstclass(int s[])
{
	
           	int p;
           	printf("\nFirst class\n");
			printf("Seats available are 1-30.\n");
            printf("Pick a seat:\n\n");
            scanf("%d",p);
                if(p<1&&p>30)
                {
                printf("\nWrong number!  No seat for you! \n\n");
                }
                else
				{
                    if (s[p-1]==1)
                    {
                        printf("\n\nSeat already taken.\n\n");
                    }
                    else
                    {
                    	s[p-1]=1;
					}
                }
}