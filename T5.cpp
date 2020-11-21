#include"iostream"
#include"cmath"
using namespace std;
class Point
{
private:
	float x;
	float y;//(x,y)
public:
	Point(float, float);//初始化点的坐标
	//~Point();
	float changeX(float);//改变X
	float changeY(float);//改变Y
	void display();//输出点的坐标
	friend float findL(Point, Point);//求两点间的距离
	friend class L;
};
class L
{
private:
	float d;

public:
	friend float findL(Point, Point);//求两点间的距离
};
Point::Point(float m, float n)//初始化点的坐标
{
	x = m;
	y = n;
}
/*Point::~Point()//析构函数
{
	cout << "析构函数被调用" << endl;
}*/
float Point::changeX(float k)//改变X
{
	x = k;
	return x;
}
float Point::changeY(float t)//改变Y
{
	y = t;
	return y;
}
void Point::display()//输出点的坐标
{
	cout << '(' << x << ',' << y << ')' << endl;
}
float findL(Point P1, Point P2)//求两点间的距离
{
	float m, n, d;
	m = (P2.x - P1.x)*(P2.x - P1.x);
	n = (P2.y - P1.y)*(P2.y - P1.y);
	d = sqrt(m + n);
	return d;
}
int main()
{
	class Point P1(3.1, 4.2);
	class Point P2(2.1, 6.3);
	cout << findL(P1, P2) << endl;
	return 0;

}
