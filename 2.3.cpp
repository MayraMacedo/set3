#include <iostream >
using namespace std;
class Point
{
	public :
		int x,y;
		Point (int u, int v) : x(u), y(v) {}
		int getX () { return x; }
		int getY () { return y; }
};
int main ()
{
	Point p(5, 3);
	cout<< p.x <<" "<< p.y <<endl;
	return 0;
}
