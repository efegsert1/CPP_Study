#include <iostream>
using namespace std;

//생성자
//			객체가 생성될 떄 자동으로 호출되는 함수.
//			함수 이름이 클래스 이름과 같다. 반환 영식이 없다. ***
//			클랴스이름() { }

//소멸자
//			f
//			f
//			f
//			f

//기본생성자 ***
//			만들지 않아도 자동 생성 - 기본생성자
//			하나라도 만들면 자동생성 안 함 ***

// Monster 클래스 작성해 보세요.
//		생성자와 소멸자를 정의하세요.
//		생성시 hp 값을 설정하도록 생성자를 추가 구현하세요.
//		monster 객체를 hp 100 으로 생성하세요

class Monster
{
	string name = "";
	int hp = 0;
public:
	Monster() { hp = 100;  }
	Monster(int n) { hp = n; } // 이게 더 편한듯
	Monster(string name, int hp)
	{
		this->name = name;
		this->hp = hp; //this포인터
	}
	~Monster() { }
	void Print() { cout << name << hp << endl; }
};

int main()
{
	Monster m1(200);
	Monster m2("mob: ", 200);
	m1.Print();
	m2.Print();
}

/*
class MyClass
{
	int num = 0;
public:
	MyClass() //생성자	 -	객체 초기화
	{
		cout << "MyClass()" << endl;
	}
	MyClass(int n)
	{
		num = n;
	}
	~MyClass() //소멸자   -  객체 해제
	{
		cout << "~MyClass()" << endl;
	}

	void Show()
	{
		cout << num << endl;
	}

};

int main()
{
	MyClass o1;			//MyClass()
	MyClass o2(10);		//MyClass(10)
	MyClass o4{ 10 }; //MyClass(10); C++14

	int			n =		1;	
	MyClass o3 = MyClass(2);
};*/

/*
class Player
{
	int hp = 100;
	int ap = 10;
public:
	int get_hp() { return hp; }
	void set_hp(int _hp) { hp = _hp; }
};

int main()
{
	Player player;
	player.set_hp(200);
	cout << player.get_hp() << endl;
}*/