#pragma once
#include <string>
#include <iostream>

class WatchCounter {
public:
	int hour;
	int minute;

	WatchCounter() {
		hour = 0;
		minute = 0;
	}

	void nextHour() {
		if (hour == 23)
		{
			hour = -1;
		}
		hour++;
	}

	void nextMinute() {
		if (minute == 59)
		{
			minute = -1;
			hour++;
		}
		minute++;
	}

	void setTime(int newHour, int newMinute) {
		if (newHour >= 0 && newHour < 24)
		{
			hour = newHour;
		}
		if (newMinute >= 0 && newMinute < 60)
		{
			minute = newMinute;
		}
	}
	//for some reasons it doesnt work
	/*string getHour() {
		return (hour > 9 ? "" : "0") + to_string(hour);
	}

	string getMinute() {
		return (minute > 9 ? "" : "0") + to_string(minute);
	}

	string getTime() {
		return getHour() + ":" + getMinute();
	}*/
};