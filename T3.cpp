//判断能否构成三角形、输出三角形周长、输出三角形面积、输出三角形类型（直角，锐角，还是钝角三角形
#include<iostream>
#include<cmath>
using namespace std;
enum Status {};
class Triangle
{
private:
	float a;
	float b;
	float c;//a,b,c为三角形的三边
public:
	Triangle();
	Triangle(float, float, float);//构造函数
	~Triangle();//析构函数
	bool judge();//判断能否构成三角形
	float findC();//求周长
	float findS();//求面积
	void judgeT();

};
Triangle::Triangle(float m, float n, float z)
{
	a = m;
	b = n;
	c = z;
}
Triangle::Triangle()
{
	cout << "构造函数被调用" << endl;
}
Triangle::~Triangle()
{
	cout << "析构函数被调用" << endl;
}
bool Triangle::judge()
{
	if (a + b > c&&a + c > b&&b + c > a)
		return true;
	else
		return false;
}
float Triangle::findC()//求周长
{
	float C;
	if (judge())
		C = a + b + c;
	else
		C = 0;
	return C;
}
float Triangle::findS()//求面积
{
	float S, p;
	p = (a + b + c) / 2;
	if (judge())
		S = sqrt(p*(p - a)*(p - b)*(p - c));
	else
		S = 0;
	return S;
}
void Triangle::judgeT()//判断三角形的类型
{
	float t;
	if (a > b)
	{
		t = b;
		b = a;
		a = t;
	}
	if (b > c)
	{
		t = c;
		c = b;
		b = t;
	}
	if (a > c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (a*a + b * b > c*c)
		cout << "该三角形为锐角三角形" << endl;
	if (a*a + b * b == c * c)
		cout << "该三角形为直角三角形" << endl;
	if (a*a + b * b < c*c)
		cout << "该三角形为钝角三角形" << endl;
}

int main()
{

	float m, n, z;
	cin >> m >> n >> z;
	//Triangle T1=Triangle(m,n,z);
	Triangle T1(m, n, z);
	cout << T1.judge() << endl;
	T1.judgeT();
	cout << T1.findS() << endl;
	cout << T1.findC() << endl;
	T1.~Triangle();
	return 0;
}