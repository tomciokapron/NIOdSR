// derived classes
#include <iostream>
#include "../include/Polygon.h"
#include "../include/Rectangle.h"
#include "../include/Tringle.h"

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
