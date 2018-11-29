#include "CPunct.h"
#include <math.h>

CPunct::CPunct(int a, int b) {
	set_CPunct(a, b);
	/*x = a;
	y = b;*/
}

void CPunct::set_CPunct(int a, int b) {
	x = a;
	y = b;
}

void CPunct::printf() const {
	cout << '[' << x << ',' << y << ']';
}

//double distance(int x1, int y1, int x2, int y2) {
//	return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
//}