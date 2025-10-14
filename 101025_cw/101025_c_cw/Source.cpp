#include <iostream>
using namespace std;

class Point {

private:
    double x;
    double y;
    double z;

public:
    Point() {
        x = 0;
        y = 0;
        z = 0;
    }

    Point(double x1, double y1, double z1) {
       x = x1;
       y = y1; 
       z = z1;
    }
    void showPoint()
    {
        cout << "Point: (" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main()
{
    double x, y, z;
    Point p1;
    p1.showPoint();
    cin >> x >> y >> z;
    Point p2(x, y, z);
    p2.showPoint();
    return 0;
}