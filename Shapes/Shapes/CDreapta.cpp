#include"CDreapta.h"

CDreapta::CDreapta() {
	//set_distance();
}

void CDreapta::calcul_distanta() {
	int a;
	int b;
	int x1, x2, y1, y2;
	
	cout << "Coordonate punct 1: ";
	cin >> a >> b;
	punct1.set_CPunct(a, b);
	cout << "Coordonate punct 2:";
	cin >> a >> b;
	punct2.set_CPunct(a, b);
	x1 = punct1.get_x();
	x2 = punct2.get_x();
	y1 = punct1.get_y();
	y2 = punct2.get_y();

	distanta = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

//void CDreapta::print() const {
//	cout << "Distanta este: " << distanta; //perimetru???
//}