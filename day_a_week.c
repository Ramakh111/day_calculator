int dayAweek(int month,int fday,int day, int dday)
{
	do
	{
	    printf("enter month to check: \n");
	    scanf("%d", &month);
		if (month > 0 && month <= 12)
		{
			printf("enter day to check: \n");
			scanf("%d", &day);
            if(day > 0 && day <= 31)
			{
				if(month == February && day > 28)
				{
					printf("Invalid input,try again\n");
				}
				else if ((month == April || month == June || month == September || month == November)&& day > 30)
				{
					printf("Invalid input,try again\n");
				}
			}
            else 
			{
				printf("Invalid input,try again\n");
			}				
	    }
		else
		{
			printf("Invalid input,try again\n");
		}
	}
	while ((!(month > 0 && month <= 12))||(!(day > 0 && day <= 31))||(month == February && day > 28)||((month == April || month == June || month == September || month == November)&& day > 30));
	
	do
	{
	    printf("enter the weekday of the 1sf of the month: (1-Saturday, 2-Monday, etc...)\n");
	    scanf("%d",&fday);
	    if(fday > 0 && fday <= 7)
	    {
		    dday = day % 7;
		    dday += fday - 1;
		    if (dday > 7)
		    {
			    dday -= 7;
		    }
		    printf("The %d.%d will ba a ", day,month);
	    }
	    else
	    {
		    printf("Invalid input,try again\n");
	    }
	}
	while(!(fday > 0 && fday <= 7));
		
	return dday;
}
