#pragma once

class Rectangle{

    private:
        double width;
        double height;
        double x;
        double y;

    public:
        Rectangle();                                                //default constructor

        Rectangle(double width, double height, double x, double y); //parameterized constructor

        Rectangle(const Rectangle& other);                          //copy constructor

        Rectangle& operator=(const Rectangle& other);               //copy assignment operator (idk)

        Rectangle(Rectangle&& other) noexcept;                      //move constructor

        ~Rectangle();

        double area();
        double perimeter();
        double get_width() const;
        double get_height() const;
        double get_x() const;
        double get_y() const;
};