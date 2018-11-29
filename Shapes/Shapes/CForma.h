#ifndef CFORMA_H
#define CFORMA_H

class CForma {
public:
	virtual double area() { return 0.0; }
	virtual double perimeter() { return 0.0; }

	virtual void print_shape_name() const = 0;
	//virtual void print() const = 0;
};

#endif