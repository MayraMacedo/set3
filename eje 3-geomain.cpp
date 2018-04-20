/*
#ifndef GEO_H
#define GEO_H

class geo
{
	int x, y;
	public :
		geo (int , int ) ;
		int getX () ;
		int getY ();
		void setX ( const int ) ;
		void setY ( const int ) ;
};
#endif

---------------------------------------------

#include "geo.h"

 geo ::geo(int xx , int yy ) {x = xx; y = yy ;}
 int geo ::getX (){ return x;}
 int geo ::getY (){ return y;}
 void geo ::setX ( const int xx) {x = xx ;}
 void geo ::setY ( const int yy) {y = yy ;}
 */
 
 
#include <iostream >
#include "geo.h"
using namespace std;
int main()
{
	geo p1(1,2);
	p1.setX(45);
	cout<<p1.getX();
	p1.setY(67);
	cout<<p1.getY();
	return 0;
}
