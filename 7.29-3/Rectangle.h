#ifndef __RETANGLE_H_
#define __RETANGLE_H_

#include "Point.h"

class Rectangle
{
private:
	Point upLeft, lowRight;
public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};
#endif