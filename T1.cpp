#include"iostream"
using namespace std;
const int Maxsize = 10;
class Stack
{
private:
	int top;
	float data[Maxsize];
public:
	Stack();
	//Stack(class Stack *S1 = 0);//构造函数
	~Stack();//析构函数
	void getdata();
	bool Push(float x);//进栈
	bool Pop(float y);//出栈
	bool ifFull();//判断栈是否为满
	bool ifEmpty();//判断栈是否为空
	int findsize();//判断栈的当前大小\
	

};
bool Stack::ifFull()
{
	if (top == Maxsize)
		return true;
	else
		return false;
}
bool Stack::ifEmpty()
{
	if (top == 0)
		return true;
	else
		return false;
}
Stack::Stack()
{
	top = 0;
	data[top] = 0;
	cout << "构造函数被调用" << endl;
}
/*Stack::Stack(class Stack *S1 );//构造函数
{
	cout << "拷贝构函数被调用 " << endl;
}*/
Stack::~Stack()
{
	cout << "析构函数被调用" << endl;
}
bool Stack::Push(float x)//进栈
{
	if (!ifFull())
	{
		data[top] = x;
		top++;
		return true;
	}

	else
		return false;
}
bool Stack::Pop(float y)//出栈
{
	if (!ifEmpty())
	{
		y = data[top];
		top--;
		return true;
	}
	else
		return false;
}

int Stack::findsize()//判断栈的当前大小
{
	return top;
}
void Stack::getdata()
{
	cout << data[top];
}
int main()
{
	float  y;
	y = 0;
	class Stack S1;
	//class Stack *S3 = S1;
	//class Stack S2(S3);

	/*for (i = 0; i < 6; i++)
	{
		cin >> x;
		S1.Push(x);
	}
	for (i = 0; i < 5; i++)
	{
		cout << S1.Pop(y) << endl;
	}
	*/
	S1.Push(1.5);
	cout << S1.findsize() << endl;
	cout << S1.Pop(y) << endl;
	S1.getdata();

}
