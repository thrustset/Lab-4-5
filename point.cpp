#include <iostream>
#include "point.h"

Point operator+(double addition, Point &source) {
    Point tmp(source);
    tmp.setX(tmp.getX() + addition);
    tmp.setY(tmp.getY() + addition);
    return tmp;
}

Point::Point(double newX, double newY) {
    x = newX;
    y = newY;
}

Point::Point(Point &source) {
    x = source.x;
    y = source.y;
}

int Point::quadrant() const {
    if(x * y == 0) return 0;
    if(x > 0 && y > 0) return 1;
    if(x < 0 && y > 0) return 2;
    if(x < 0 && y < 0) return 3;
    if(x > 0 && y < 0) return 4;
    return -1;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::print() const {
    std::cout << "(" << x << "; " << y << ")\n";
}


