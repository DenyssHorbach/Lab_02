using System;
using Rectangles;


namespace Lab
{
    class Program
    {
        static void Main(string[] args)
        {
            Rectangle rect1 = new Rectangle(13, 37, 2, 4);
            Rectangle rect2 = new Rectangle(rect1);
            Rectangle rect3 = new Rectangle();

            Console.WriteLine($"Rectangle data: Width = {rect1.getData().Item1}, Height = {rect1.getData().Item2}");
            Console.WriteLine($"Area: {rect1.Area()}");
            Console.WriteLine($"Perimeter: {rect1.Perimeter()}");
            Console.WriteLine("Vertices:");
            foreach (var (x, y) in rect1.getVertices())
            {
                Console.WriteLine($"({x}, {y})");
            }
        }
    }
}