#include"CForma.h"
#include"CPunct.h"
#include"CDreapta.h"
#include"CPatrat.h"
#include"CDreptunghi.h"
#include"CCerc.h"



int main() {
	CDreapta asd;
	asd.calcul_distanta();
	//asd.print();
	cout << endl;
	cout<<asd.perimeter();

	CPatrat pa1(1,2,3,4,5,6,7,8);
	//pa1.CPatratt(1, 2, 3, 4, 5, 6, 7, 8);
	pa1.print_shape_name();
	/*cout<< pa1.area() <<" " << pa1.perimeter();*/
	cout << pa1.perimeter() << " " << pa1.area();

	CDreptunghi pa2(1, 2, 4, 6, 6, 7, 8, 9);
	pa2.print_shape_name();
	cout << pa2.area() << " " << pa2.perimeter();

	CCerc pa3(4, 1, 6);
	pa3.print_shape_name();
	cout << pa3.area() << " " << pa3.perimeter();
}