#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rect1;
    Rectangle* rect2 = new Rectangle(13, 37, 6, 8);
    Rectangle* rect3(rect2);

    cout<<"rect2 area: "<<rect2->area()<<endl;
    cout<<"rect2 perimeter: "<<rect2->perimeter()<<endl;
    cout<<"rect2 data: width = "<<rect2->get_width()<<" height = "<<rect2->get_height()<<endl;
    cout<<"rect2 coords:"<<endl
                            <<"Bottom right: x = "<<rect3->get_x() + rect3->get_width()<<" y = "<<rect3->get_y()<<endl
                            <<"Top left: x = "<<rect3->get_x()<<" y = "<<rect3->get_y() + rect3->get_height()<<endl
                            <<"Top right: x = "<<rect3->get_x() + rect3->get_width()<<" y = "<<rect3->get_y() + rect3->get_height()<<endl
                            <<"Bottom left: x = "<<rect3->get_x()<<" y = "<<rect3->get_y()<<endl;
    return 0;
}