#include <iostream>
using namespace std;

//������
//			��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�.
//			�Լ� �̸��� Ŭ���� �̸��� ����. ��ȯ ������ ����. ***
//			Ŭ�����̸�() { }

//�Ҹ���
//			f
//			f
//			f
//			f

//�⺻������ ***
//			������ �ʾƵ� �ڵ� ���� - �⺻������
//			�ϳ��� ����� �ڵ����� �� �� ***

// Monster Ŭ���� �ۼ��� ������.
//		�����ڿ� �Ҹ��ڸ� �����ϼ���.
//		������ hp ���� �����ϵ��� �����ڸ� �߰� �����ϼ���.
//		monster ��ü�� hp 100 ���� �����ϼ���

class Monster
{
	string name = "";
	int hp = 0;
public:
	Monster() { hp = 100;  }
	Monster(int n) { hp = n; } // �̰� �� ���ѵ�
	Monster(string name, int hp)
	{
		this->name = name;
		this->hp = hp; //this������
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
	MyClass() //������	 -	��ü �ʱ�ȭ
	{
		cout << "MyClass()" << endl;
	}
	MyClass(int n)
	{
		num = n;
	}
	~MyClass() //�Ҹ���   -  ��ü ����
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