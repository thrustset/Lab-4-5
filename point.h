#pragma once

class Point {
private:
    double x{};
    double y{};
    friend Point operator+(double addition, Point &source);
public:
    Point(double newX, double newY);
    Point(Point &source);

    double getX() const;
    double getY() const;

    void setX(double newX);
    void setY(double newY);

    int quadrant() const;
    void print() const;
};