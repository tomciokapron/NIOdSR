// derived classes
#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Tringle.h"

using namespace std;

int main () {
  Rectangle rect;
  Tringle trgl;
  rect.set_values (4,5);
  trgl.set_values (4,5);
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';
  return 0;
}
