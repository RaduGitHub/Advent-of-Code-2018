#include "CCerc.h"

CCerc::CCerc(double l, int x, int y)
{
	punct.set_CPunct(x, y);
	raza = l;
}

double CCerc::area() {
	return (raza * raza * 3.14);
}

//double CDreptunghi::perimeter() {
//	latura_mica = sqrt((punct2.get_x() - punct1.get_x())*(punct2.get_x() - punct1.get_x()) + (punct2.get_y() - punct1.get_y())*(punct2.get_y() - punct1.get_y()));
//	latura_mare = sqrt((punct2.get_x() - punct3.get_x())*(punct2.get_x() - punct3.get_x()) + (punct2.get_y() - punct3.get_y())*(punct2.get_y() - punct3.get_y()));
//	return  (2 * latura_mica) + (2 * latura_mare);
//}