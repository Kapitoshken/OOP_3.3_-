#include "LongLong.h"
#include <iostream>
using namespace std;

int main() {

	LongLong g, g1;
	cout << "Input first numbers" << endl;
	cin >> g;
	cout << "Input second numbers" << endl;
	cin >> g1;
	cout << "Equivalent " << operator==(g, g1) << endl;
	cout << "NotEquivalent " << operator!=(g, g1) << endl;
	cout << "NotGreatThan " << operator<(g, g1) << endl;
}