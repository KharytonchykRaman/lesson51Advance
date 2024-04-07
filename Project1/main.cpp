#include "Counter.h"

using namespace std;

int main() {

	WatchCounter watch;

	watch.setTime(10,40);
	cout << "Time before: " << watch.hour << ":" << watch.minute << endl;
	watch.setTime(23, 59);
	cout << "Time after: " << watch.hour << ":" << watch.minute << endl;

	watch.nextHour();
	watch.nextMinute();
	cout <<"Time: " << watch.hour << ":" << watch.minute << endl;

	return 0;
}