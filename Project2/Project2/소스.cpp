//���� ��� �Լ�(static member function)
//			C++������ Ŭ������ ��� �Լ��� ����(static)���� ������ �� �ֽ��ϴ�.
//			�̷��� ����� ���� ��� �Լ��� �ش� Ŭ������ ��ü�� �������� �ʰ�,
//			Ŭ���� �̸������� ȣ���� �� �ֽ��ϴ�.
//
//			1. ��ü�� �������� �ʰ� Ŭ���� �̸������� ȣ���� �� �ֽ��ϴ�.
//			2. ��ü�� �������� �����Ƿ�, this �����͸� ������ �ʽ��ϴ�.
//			3. Ư�� ��ü�� �������� �����Ƿ�, ���� ��� �����ۿ� ����� �� �����ϴ�. ***

//	��ø Ŭ����	(Nested Class) �Ǵ�
// ���� Ŭ����	(Inner Class)
//
//		   Ŭ���� ���ο� �� �ٸ� Ŭ������ ���� �� �ִ�
//		   �������� ĸ��ȭ(Encapsulation)�� ���� ����(Information Hiding)�� ���ؼ� ���

//	��ø Ŭ������ ����ϴ� ������
//
//		class��
//
//
//
#include <iostream>
using namespace std;

/*class Int
{
	int num = 0;

	struct Int_op
	{
		void add(Int& a) { a.num++; }					//��� ���
		void sub(Int & a) { a.num--; }
	};

	struct Int_ui {
		void show(const Int& a) { cout << a.num << endl; }
	};

public:
	void Add() { Int_op a; a.add(*this); }				//���ο��� ��� *this
	void Show() { Int_ui a; a.show(*this); }
};

int main()
{
	Int a;
	a.Add();
	a.Show();
}*/

/*class Outter
{
private:
	int n = 0;
public:
	class Nested
	{
		int n = 0;
	public:
		void Func() { cout << n << endl; } //private ���� ��� ***
	};

	Nested obj;
};

int main(void)
{
	Outter out;
	Outter::Nested obj;

	return 0;
}*/

/*struct enclose
{
	struct inner									//enclose ���ο��� ����ϰڴ�.
	{
		static int ivalue;
		void func(int value) {	}
	};

	void func();
};
int enclose::inner::ivalue = 1;

void enclose::func() {	 }

int main(void)
{

	return 0;
}*/


//�� ��ü�� num ������ ��ü�� �����ϴ� �Լ� ����
//	1. ����Լ��� �����ϼ���.
//	2. ������ �Լ��� �����ϼ���.
/*class MyClass
{
	int num = 0;
public:
	int Get() { return num; }
	void Set(int a) { num = a; }
			
	MyClass Sum1(MyClass obj)									//1. ����Լ�
	{
		MyClass a; a.Set(num + obj.num);
		return a;
	}

	friend MyClass Sum2(MyClass obj1, MyClass obj2);	//2. ������ �Լ�
};

MyClass Sum2(MyClass obj1, MyClass obj2)
{
	MyClass a; a.Set(obj1.num + obj2.num);
	return a;
}*/

/*int main(void)
{
	MyClass x;
	MyClass y;
	MyClass z1 = x.Sum1(y);								//1. ����Լ�	//�� ��ü�� num ������ ���� ����
	MyClass z2 = Sum2(x, y);							//2. ������ �Լ��� �����ϼ���.
	cout << z1.Get() << " " << z2.Get();
	return 0;
}*/


/*class Point
{
private:
	int x;
	int y;
public:
	Point(const int& x, const int& y) : x(x), y(y) {	}
	//friend class PointOp;
	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
};

class PointOP
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0) {	}
	~PointOP() { cout	 << opcnt << endl; }
	Point PointAdd(const Point&, const Point&);
	Point PointAdd(const Point&, const Point&);
};
int main(void)
{

	return 0;
}*/

/*class Girl;

class Boy
{
private:
	int height;
	//friend class Girl;							//friend ������ Ŭ������ private ����� ������ ���
public:
	Boy(int len) : height(len) {	}
	void ShowYourFriendInfo(Girl& frn) { cout << frn.phNum << endl; }
	friend class Girl
};

class Girl
{
private:
	char phNum[20];
public:
	Girl(char* num) { strcpy_s(phNum, num); }
	void ShowYourFriendInfo(Boy& frn) { cout << frn.height << endl; }
	friend class Boy
};

int main(void)
{

	return 0;
};*/

 // ������ �Լ�
/*class Int
{
	int n = 0;
public:
	Int(int a) : n(a) { }

	friend void Print(Int obj);
	friend Int Add(Int& a, Int& b);
};

void Print(Int obj) {
	cout << obj.n << endl;
}
Int Add(Int& a, Int& b) {
	return(a.n + b.n);
}

int main(void)
{
	Int a(1);
	Int b(2);
	Int c = Add(a, b);
}*/


/*class CountryArea
{
public:
	const static int RUSSIA = 1707540;					// const static ���� ���� // ��ũ�� ���� ����
	const static int CANADA = 1351315;
	const static int CHINA = 234987;
	const static int SOUTH_KOREA = 9922;
	
};

int  main(void)
{
	cout << "���þ� ����" << CountryArea::RUSSIA << "km" << endl;
	cout << "ĳ���� ����" << CountryArea::CANADA << "km" << endl;
	cout << "�߱� ����" << CountryArea::CHINA << "km" << endl;
	cout << "�ѱ� ����" << CountryArea::SOUTH_KOREA << "km" << endl;
}*/

/*class CTest
{
private:
	int num1 = 0;
	static int num2;
public:
};
int CTest::num2 = 0;	// static ������ �ʱ�ȭ

int main(void)
{
	static CTest t;

	return 0;
}*/

/*class MyClass {
	static int g_count; // static ��� ���� // ���α׷� ��ü �������� �ϳ��� ����		MyClass::g_count
public:
	MyClass() { g_count++; }
	~MyClass() { g_count--; }
	static void func() { cout << g_count << endl; }	// static ��� �Լ�
};
int MyClass::g_count = 0; // static ������ �ʱ�ȭ *** // C++14

int main(void)
{
	MyClass a;
	MyClass b;
	MyClass c;
	{
		MyClass d;
		MyClass::func();
	}
	MyClass::func();

	return 0;
}*/

/*void Counter()
{
	static int cnt;					//���α׷� ���� ��
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}*/