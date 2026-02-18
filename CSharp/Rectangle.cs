namespace Rectangles{

    class Rectangle
    {
        public double Width;
        public double Height;
        public double X;
        public double Y;

        public Rectangle()   //default (primary) constructor
        {
            Width = 1;
            Height = 1;
            X = 0;
            Y = 0;
        }

        public Rectangle(double width, double height, double x, double y)   //parameterized constructor
        {
            Width = width;
            Height = height;
            X = x;
            Y = y;
        }

        public Rectangle(Rectangle other)   //copy constructor
        {
            Width = other.Width;
            Height = other.Height;
            X = other.X;
            Y = other.Y;
        }
        

        public double Area()
        {
            return Width * Height;
        }

        public double Perimeter()
        {
            return 2 * (Width + Height);
        }

        public (double, double)[] getVertices()
        {
            return new (double, double)[]
            {
                (X, Y),                     //bottom left
                (X + Width, Y),             //bottom right
                (X + Width, Y + Height),    //top right
                (X, Y + Height)             //top left
            };
        }

        public (double, double) getData()
        {
            return (Width, Height);
        }

        ~Rectangle()
        {
            
        }
    }
}