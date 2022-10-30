void Economicclass(int s[])
{
	int p;
			printf("\neconomic class\n");
			printf("Seats available are 31-100.\n");
                printf("Pick a seat:\n\n");
                scanf("%d",&p);
                if(p<31||p>100)
                {
                printf("\nWrong number!  No seat for you! \n\n");
                }
                else{
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