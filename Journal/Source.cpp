#include "journal.h"

int main() {
	Journal mag;
	mag.Input();
	cout << endl;
	mag.Print();

	cout << endl;
	cout << endl;

	Journal mag2;
	mag2.Input();
	cout << endl;
	mag2.Print();

	cout << Journal::count << endl;
}