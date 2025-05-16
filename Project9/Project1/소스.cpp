//this* 는 연습해야함
//연습) 객체배열, 동적할당, 포인터 배열
#include <iostream>
using namespace std;

class CTest
{
	int num;
public:
	CTest() : num(0) {		}
	CTest(int n) : num(n)	{	}
	void ShowDate() { cout << num << endl; }
};

int main(void)
{
	CTest x;
	cout << sizeof(x) << endl;
}
//클래스의 크기는 맴버 변수의 사이즈 이다. ***
//함수의 크기는 객체의 크기와 무관하다. ***
//맴버의 크기 합과 다를 수 있다.

// h
/*class Circle
{
	int radius; // 반지름
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; } //넓이
};
// cpp
Circle::Circle() { radius = 1; }
Circle::Circle(int r) : radius(r) {  }
Circle::~Circle() {}

int main(void)
{
	// 객체 배열 // 각각 반지름 2,3,4로 설정후 넓이를 출력하세요.
	Circle arr1[3] = { Circle(2), Circle(3), Circle(5) };
	for (int i = 0; i < 3; ++i)
		cout << arr1[i].getArea() << endl;

	// 객체를 동적으로 할당하여, 각각 반지름 2,3,5로 설정후 출력하세요
	Circle* arr2 = new Circle[3]{ Circle(2), Circle(3), Circle(5) };
	for (int i = 0; i < 3; ++i)
		cout << arr2[i].getArea() << endl;
	delete[] arr2;

	// 포인터 배열 ***
	Circle* arr3[3]{ new Circle(2), new Circle(3), new Circle(5) };

	for (int i = 0; i < 3; ++i)
		cout << arr3[i]->getArea() << endl;

	delete arr3[0];
	delete arr3[1];
	delete arr3[2];
}*/
/*
// Player 클래스를 만들고, hp 맴버 선언하고 초기값 100 을 설정하세요
class Player
{
public:
	int hp = 100;
};

// 객체를 생성한 후
// 생성된 객체를 전달 받아, (Call by Reference)
// hp를 감소 시키는 damage 함수를 만들어 보세요.

void Damage(Player& p, int dmg)
{
	p.hp -= 10;
}

int main(void)
{
	Player p1;
	Damage(p1, 10);
	cout << p1.hp;

}*/

/*class MyClass
{
	int num = 0;
public:
	MyClass(int a) : num(a) { }
	void Add() { ++num; }
	void Show() { cout << num << endl; }
};

MyClass FuncByValue(MyClass obj)					//Pass by Value
{
	obj.Add(); return obj;
}
MyClass* FuncByAddress(MyClass* obj)			//Pass by Reference
{
	obj->Add(); return obj;
}
MyClass& FuncByReference(MyClass& obj)		//Pass by Reference
{
	obj.Add(); return obj;
}

int main(void)
{
	MyClass x(1);
	MyClass		a = FuncByValue(x);				a.Show();		// 2
	MyClass*	b = FuncByAddress(&x);			b->Show();	// 2
	MyClass	&	c = FuncByReference(x);			c.Show();		// 3

	// 참조 반환의 경우 //둘의 차이점은?
	MyClass		d1 = FuncByReference(x);	//	x copy d1
	MyClass&	b2 = FuncByReference(x);	// x, d2
}*/

/*class MyClass		//배열의 포인터
{
	int n = 0;
	int m = 0;
public:
	MyClass(){ }

	MyClass(int a)
	{
		this->n = n;
	}
	void Show() { cout << this->n << endl; }	////

	MyClass   GetObject() { return MyClass(0); }	//객체 생성 반환
	MyClass* GetPointer() { return this; }				//객체 주소 반환
	MyClass& GetRef()		 { return *this; }			//객체 자신 반환
};

int main()
{
	MyClass x(1);		  x.Show();
	MyClass	  o		= x.GetObject();		//	o copy
	MyClass* p	= x.GetPointer();		//	p == &r
	MyClass& r		= x.GetRef();				//	x == r
}*/

/*
void Print(MyClass* p, int length)
{
	for (size_t i = 0; i < length; i++)
	{
		p[i].Show();
	}
}

int main()
{
	MyClass myclass[3] = { MyClass(1), MyClass(2),  MyClass(3) };
	int length = sizeof(myclass)/ sizeof(myclass[0]);
	//객체 배열을 포인터로 전달해보자 ***
	Print(myclass, length);

	MyClass* parr = myclass;
	parr->Show();	//1
	(parr + 1)->Show();	//2
	(parr + 2)->Show();	//3		//포인터로 맴버 접근 ***

	parr[0].Show();	//1
	parr[1].Show();	//2
	parr[2].Show();	//3
}*/