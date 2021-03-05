#include <iostream>
#include "point.h"

int main() {
    auto *p1 = new Point(1, 1);
    auto *p2 = new Point(*p1);
    p2->print();

    return 0;
}
