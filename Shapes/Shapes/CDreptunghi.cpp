#include "CDreptunghi.h"


CDreptunghi::CDreptunghi(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	punct1.set_CPunct(x1, y1);
	punct2.set_CPunct(x2, y2);
	punct3.set_CPunct(x3, y3);
	punct4.set_CPunct(x4, y4);
}

double CDreptunghi::area() {
	latura_mica = sqrt((punct2.get_x() - punct1.get_x())*(punct2.get_x() - punct1.get_x()) + (punct2.get_y() - punct1.get_y())*(punct2.get_y() - punct1.get_y()));
	latura_mare = sqrt((punct2.get_x() - punct3.get_x())*(punct2.get_x() - punct3.get_x()) + (punct2.get_y() - punct3.get_y())*(punct2.get_y() - punct3.get_y()));
	return (latura_mica * latura_mare);
}

double CDreptunghi::perimeter() {
	latura_mica = sqrt((punct2.get_x() - punct1.get_x())*(punct2.get_x() - punct1.get_x()) + (punct2.get_y() - punct1.get_y())*(punct2.get_y() - punct1.get_y()));
	latura_mare = sqrt((punct2.get_x() - punct3.get_x())*(punct2.get_x() - punct3.get_x()) + (punct2.get_y() - punct3.get_y())*(punct2.get_y() - punct3.get_y()));
	return  (2 * latura_mica) + (2 * latura_mare);
}