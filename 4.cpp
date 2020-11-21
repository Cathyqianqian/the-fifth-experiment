#include<iostream>
using namespace std;
class Student
{
private:
	string name;
	bool gender;
	int id;
	string birthday;
	string Address;
	double A;
	double B;
	double C;
	double D;
	double E;
	double F;
public:
	Student()
	{
		name = "Wanglingling";
		gender = 0;
		id = 201911990156;
		birthday = "2000.7.8";
		Address = "SanDong LiaoCheng";
		A = 90;
		B = 92;
		C = 94;
		D = 96;
		E = 98;
		F = 100;
	}
	Student(bool gender, string Address)
	{
		name = "Wanglingling";
		id = 201911990156;
		birthday = "2000.7.8";
		A = 90;
		B = 92;
		C = 94;
		D = 96;
		E = 98;
		F = 100;
	}
	Student(const Student& student)
	{
		name = student.name;
		gender = student.gender;
		id = student.id;
		birthday = student.birthday;
		Address = student.Address;
		A = student.A;
		B = student.B;
		C = student.C;
		D = student.D;
		E = student.E;
		F = student.F;
	}
	void OutPut();
};

void Student::OutPut()
{
	cout << name << endl << gender << endl << id << endl << birthday << endl << Address << endl << "A:" << A << endl << "B:" << B << endl << "C:" << C << endl << "D:" << D << endl << "E:" << E << endl << "F:" << F << endl;
	cout << "please correct" << endl;
	cout << "please choose the data you want to correct:" << endl;
	cout << "1.name 2.gender 3.id 4.birthday 5.Address 6.A 7.B 8.C 9.D 10.E 11.F"<<endl;
	int n;
	cin >> n;
	if (n == 1)
	{
		string m;
		cin >> m;
		name = m;
	}
	if (n == 2)
	{
		bool m;
		cin >> m;
		gender = m;
	}
	if (n == 3)
	{
		int m;
		cin >> m;
		id = m;
	}
	if (n == 4)
	{
		string m;
		cin >> m;
		birthday = m;
	}
	if (n == 5)
	{
		string m;
		cin >> m;
		Address = m;
	}
	if (n == 6)
	{
		double m;
		cin >> m;
		A = m;
	}
	if (n == 6)
	{
		double m;
		cin >> m;
		B = m;
	}
	if (n == 6)
	{
		double m;
		cin >> m;
		C = m;
	}
	if (n == 6)
	{
		double m;
		cin >> m;
		D = m;
	}
	if (n == 6)
	{
		double m;
		cin >> m;
		E = m;
	}
	if (n == 6)
	{
		double m;
		cin >> m;
		F = m;
	}
	cout << name << endl << gender << endl << id << endl << birthday << endl << Address << endl << "A:" << A << endl << "B:" << B << endl << "C:" << C << endl << "D:" << D << endl << "E:" << E << endl << "F:" << F << endl;
}
int main()
{
	Student A;
	Student B(1,"Sandong Jinan" );
	Student C = A;
	A.OutPut();
}