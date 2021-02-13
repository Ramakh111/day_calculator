#include <stdio.h>
#include <math.h>

int dayAweek(int month,int fday,int day, int dday);

enum months{January=1,February,March,April,May,June,July,August,September,October,November,December};
enum days{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main()
{
	enum months month;
	enum days dday;
	int day = 0,fday = 0;
	printf("Welcome to the day calculator!\n");
	switch (dayAweek(month,fday,day,dday))
	{
	case 1:
	    printf("Sunday");
		break;
	case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;	
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;	
    case 7:
        printf("Saturday");
        break;
    }	
	
	return 0;
}
