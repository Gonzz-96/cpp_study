#include <iostream>
#include <vector>

using namespace std;

enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };
enum Month { january, february, march, april, may, june }; // plain enum

Traffic_light& operator++(Traffic_light& t)
{
    switch(t) {
    case Traffic_light::green:  return t = Traffic_light::yellow;
    case Traffic_light::yellow: return t = Traffic_light::red;
    case Traffic_light::red:    return t = Traffic_light::green;
    }
}

void enum_method()
{
    Color col = Color::red;
    Traffic_light light = Traffic_light::red;
    Month month = Month::april;
}

class Point {
public:
    Point(double x, double y) :
        _x{x}, _y{y} {};

    double getX() { return _x; }
    double getY() { return _y; }

private:
    double _x;
    double _y;
};

class Shape {
public:
    Shape(vector<Point> vertex) : 
        _vertex{vertex} {
        
        _color = Color::red;
    };

    Shape(vector<Point> vertex, Color color) : 
        _vertex{vertex},
        _color{color} {};

private:
    vector<Point> _vertex;
    Color _color;
};


int main()
{
    vector<Point> vertex { 
        new Point(0.0, 0.0), 
        new Point(2.0, 0.0),
    };

    Shape s = Shape(vertex, Color::blue);

}