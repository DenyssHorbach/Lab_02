#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rect1;
    Rectangle rect2(13, 37, 6, 8);
    Rectangle rect3(rect2);

    cout<<"rect2 area: "<<rect2.area()<<endl;
    cout<<"rect2 perimeter: "<<rect2.perimeter()<<endl;
    cout<<"rect2 data: width = "<<rect2.get_width()<<" height = "<<rect2.get_height()<<endl;
    cout<<"rect2 coords:"<<endl
                            <<"Bottom right: x = "<<rect2.get_x() + rect2.get_width()<<" y = "<<rect2.get_y()<<endl
                            <<"Top left: x = "<<rect2.get_x()<<" y = "<<rect2.get_y() + rect2.get_height()<<endl
                            <<"Top right: x = "<<rect2.get_x() + rect2.get_width()<<" y = "<<rect2.get_y() + rect2.get_height()<<endl
                            <<"Bottom left: x = "<<rect2.get_x()<<" y = "<<rect2.get_y()<<endl;
    return 0;
}