//정적 멤버 함수(static member function)
//			C++에서는 클래스의 멤버 함수도 정적(static)으로 선언할 수 있습니다.
//			이렇게 선언된 정적 멤버 함수는 해당 클래스의 객체를 생성하지 않고도,
//			클래스 이름만으로 호출할 수 있습니다.
//
//			1. 객체를 생성하지 않고 클래스 이름만으로 호출할 수 있습니다.
//			2. 객체를 생성하지 않으므로, this 포인터를 가지지 않습니다.
//			3. 특정 객체와 결합하지 않으므로, 정적 멤버 변수밖에 사용할 수 없습니다. ***

//	중첩 클래스	(Nested Class) 또는
// 내부 클래스	(Inner Class)
//
//		   클래스 내부에 또 다른 클래스를 만들 수 있다
//		   데이터의 캡슐화(Encapsulation)와 정보 은닉(Information Hiding)을 위해서 사용

//	중첩 클래스를 사용하는 이유는
//
//		class의
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
		void add(Int& a) { a.num++; }					//멤버 사용
		void sub(Int & a) { a.num--; }
	};

	struct Int_ui {
		void show(const Int& a) { cout << a.num << endl; }
	};

public:
	void Add() { Int_op a; a.add(*this); }				//내부에서 사용 *this
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
		void Func() { cout << n << endl; } //private 변수 사용 ***
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
	struct inner									//enclose 내부에서 사용하겠다.
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


//두 객체의 num 더해진 객체를 리턴하는 함수 구현
//	1. 멤버함수로 구현하세요.
//	2. 프렌즈 함수로 구현하세요.
/*class MyClass
{
	int num = 0;
public:
	int Get() { return num; }
	void Set(int a) { num = a; }
			
	MyClass Sum1(MyClass obj)									//1. 멤버함수
	{
		MyClass a; a.Set(num + obj.num);
		return a;
	}

	friend MyClass Sum2(MyClass obj1, MyClass obj2);	//2. 프렌즈 함수
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
	MyClass z1 = x.Sum1(y);								//1. 멤버함수	//두 객체의 num 더해진 객페 리턴
	MyClass z2 = Sum2(x, y);							//2. 프렌즈 함수로 구현하세요.
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
	//friend class Girl;							//friend 선언한 클래스는 private 멤버의 접근을 허용
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

 // 프렌드 함수
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
	const static int RUSSIA = 1707540;					// const static 정의 가능 // 메크로 보다 편히
	const static int CANADA = 1351315;
	const static int CHINA = 234987;
	const static int SOUTH_KOREA = 9922;
	
};

int  main(void)
{
	cout << "러시아 면적" << CountryArea::RUSSIA << "km" << endl;
	cout << "캐나다 면적" << CountryArea::CANADA << "km" << endl;
	cout << "중국 면적" << CountryArea::CHINA << "km" << endl;
	cout << "한국 면적" << CountryArea::SOUTH_KOREA << "km" << endl;
}*/

/*class CTest
{
private:
	int num1 = 0;
	static int num2;
public:
};
int CTest::num2 = 0;	// static 변수로 초기화

int main(void)
{
	static CTest t;

	return 0;
}*/

/*class MyClass {
	static int g_count; // static 멤버 변수 // 프로그램 전체 영역에서 하나만 존재		MyClass::g_count
public:
	MyClass() { g_count++; }
	~MyClass() { g_count--; }
	static void func() { cout << g_count << endl; }	// static 멤버 함수
};
int MyClass::g_count = 0; // static 변수의 초기화 *** // C++14

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
	static int cnt;					//프로그램 실행 시
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}*/