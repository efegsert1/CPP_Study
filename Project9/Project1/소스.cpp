//this* �� �����ؾ���
//����) ��ü�迭, �����Ҵ�, ������ �迭
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
//Ŭ������ ũ��� �ɹ� ������ ������ �̴�. ***
//�Լ��� ũ��� ��ü�� ũ��� �����ϴ�. ***
//�ɹ��� ũ�� �հ� �ٸ� �� �ִ�.

// h
/*class Circle
{
	int radius; // ������
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; } //����
};
// cpp
Circle::Circle() { radius = 1; }
Circle::Circle(int r) : radius(r) {  }
Circle::~Circle() {}

int main(void)
{
	// ��ü �迭 // ���� ������ 2,3,4�� ������ ���̸� ����ϼ���.
	Circle arr1[3] = { Circle(2), Circle(3), Circle(5) };
	for (int i = 0; i < 3; ++i)
		cout << arr1[i].getArea() << endl;

	// ��ü�� �������� �Ҵ��Ͽ�, ���� ������ 2,3,5�� ������ ����ϼ���
	Circle* arr2 = new Circle[3]{ Circle(2), Circle(3), Circle(5) };
	for (int i = 0; i < 3; ++i)
		cout << arr2[i].getArea() << endl;
	delete[] arr2;

	// ������ �迭 ***
	Circle* arr3[3]{ new Circle(2), new Circle(3), new Circle(5) };

	for (int i = 0; i < 3; ++i)
		cout << arr3[i]->getArea() << endl;

	delete arr3[0];
	delete arr3[1];
	delete arr3[2];
}*/
/*
// Player Ŭ������ �����, hp �ɹ� �����ϰ� �ʱⰪ 100 �� �����ϼ���
class Player
{
public:
	int hp = 100;
};

// ��ü�� ������ ��
// ������ ��ü�� ���� �޾�, (Call by Reference)
// hp�� ���� ��Ű�� damage �Լ��� ����� ������.

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

	// ���� ��ȯ�� ��� //���� ��������?
	MyClass		d1 = FuncByReference(x);	//	x copy d1
	MyClass&	b2 = FuncByReference(x);	// x, d2
}*/

/*class MyClass		//�迭�� ������
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

	MyClass   GetObject() { return MyClass(0); }	//��ü ���� ��ȯ
	MyClass* GetPointer() { return this; }				//��ü �ּ� ��ȯ
	MyClass& GetRef()		 { return *this; }			//��ü �ڽ� ��ȯ
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
	//��ü �迭�� �����ͷ� �����غ��� ***
	Print(myclass, length);

	MyClass* parr = myclass;
	parr->Show();	//1
	(parr + 1)->Show();	//2
	(parr + 2)->Show();	//3		//�����ͷ� �ɹ� ���� ***

	parr[0].Show();	//1
	parr[1].Show();	//2
	parr[2].Show();	//3
}*/