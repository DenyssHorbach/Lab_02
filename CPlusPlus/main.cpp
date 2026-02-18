#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rect1;
    Rectangle rect2(13, 37, 6, 8);
    Rectangle rect3(rect2);
    Rectangle rect4 = rect3;
    Rectangle rect5(move(rect4));

    cout<<"rect1 area: "<<rect1.area()<<endl;
    cout<<"rect1 perimeter: "<<rect1.perimeter()<<endl;
    cout<<"rect1 data: width = "<<rect1.get_width()<<" height = "<<rect1.get_height()<<endl;
    cout<<"rect1 coords:"<<endl
                            <<"Bottom right: x = "<<rect1.get_x() + rect1.get_width()<<" y = "<<rect1.get_y()<<endl
                            <<"Top left: x = "<<rect1.get_x()<<" y = "<<rect1.get_y() + rect1.get_height()<<endl
                            <<"Top right: x = "<<rect1.get_x() + rect1.get_width()<<" y = "<<rect1.get_y() + rect1.get_height()<<endl
                            <<"Bottom left: x = "<<rect1.get_x()<<" y = "<<rect1.get_y()<<endl;
    return 0;
}