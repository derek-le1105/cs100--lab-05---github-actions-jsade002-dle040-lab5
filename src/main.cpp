#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main(){
    Rectangle rect1(1, 2);
    Rectangle rect2();

    rect2.set_width(3);
    rect2.set_height(4);

    cout << "Rectangle 1 area: " << rect1.area() << endl;
    cout << "Rectangle 2 area: " << rect2.area() << endl;


    return 0;
}
