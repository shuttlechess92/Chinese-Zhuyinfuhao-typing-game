#ifndef TIMER_H
#define TIMER_H


#include <time.h>

// my timer

//another way to implement is to have for loop
// continuously compare starting time and current time
// and see if it is 60 seconds yet
bool timer(time_t start, int seconds)
{
	time_t end;
	do
	{
		time (&end);
	}
	while(difftime(start, end)<60*CLOCKS_PER_SEC);

		return true;
}








#endif
