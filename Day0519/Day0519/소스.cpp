#include <iostream>
using namespace std;

// static ����			// ���� ������ ��������

void Counter()
{
	static int cnt;					// ���α׷� ����� ���� // �ڵ� �ʱ�ȭ
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}

/*class CTest
{
private:
	int num1;
	mutable int num2;			// mutable�� ����� ��������� const �Լ� ������ ���� ������  ���� ***
public:
	CTest(int n1, int n2) : num1(n1), num2(n2)
	{
	}
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const
	{
		num2 = num1;							// const �Լ������� ������ ����
	}
};*/

/*class Foo
{
	int bar;
public:
	const int& Get() const { return bar; }
};

int main(void)
{
	Foo foo;
	
	const int& n = foo.Get();

	return 0;
}*/


// ��� ��� ����(constant member veriable)
//
//				��� ��� ������ �� �� �ʱ�ȭ�ϸ�, �� ���� ������ �� ���� ��� ������ �ǹ��մϴ�/
//
//				const double pi = 3.141592l;

// ��� ��� �Ѽ�(const

// Ŭ������ const ���
// const �Լ��������� ���� Ŭ������ ����� ��������� ���� �������� ���Ѵ� ***
/*
class SimpleClass
{
	int num1;
	const int num2 = 0;			// const �������		// �ʱ�ȭ
public:
	SimpleClass(int n1, int n2) : num1(n1), num2(n2)
	{

	}
	void ShowData() const		// const �Լ� // ����� �������� ���� ***
	{
		cout << num1 << ' ' << num2 << endl;
		//num1++;	//error
	}
	void func1() {		}
	void func2() const {		}
};

// ���ȭ �� ��ü // const ��ü ***
int main(void)
{
	const SimpleClass obj1(0, 1); obj1.func1(); obj1.func2(); // const ����Լ��� ***
		     SimpleClass obj2(0, 1); obj2.func1(); obj2.func2();

}*/

// Item class �� �����
//
//	index, name, level, grade �� ����Ÿ �ɹ��� �߰��ϼ���.
//	SetGrade, GetGrade, GradeUp, Show �Լ��� �����ϼ���.
//

// Item class �� �̿��Ͽ�
// ������ �������� 5�� �̻� �����Ͽ� �迭�� �����ϰ� (������ ����Ʈ)

/*class Item
{
private:
	int index = 0;
	char name[100];
	int level;
	char grade = 'A';
public:
	Item() {}
	Item(int idx, const char* n, int lv, char g)
	{
		index = idx;
		strcpy_s(name, sizeof(name), n);
		level = lv;
		grade = g;
	}
	~Item() {}
	void print()
	{
		if (index == 0) return;
		cout << index << ", " << name << ", " << level << ", " << grade << endl;
	}
};

int main(void)
{
	Item ItemList[5] = 
	{
		Item {1, "�ܰ�", 1, 'A'},
		Item {2, "�ܰ�", 2, 'A'},
		Item {3, "����", 1, 'B'},
		Item {4, "����", 2, 'B'},
		Item {5, "����", 3, 'S'}
	};
	for (size_t i = 0; i < 5; i++) ItemList[i].print();

	// ������ �迭	* []
	Item* ItemList2[5] =
	{
		new Item {1, "�ܰ�", 1, 'A'},
		nullptr,
		new Item {3, "����", 1, 'B'},
		new Item {4, "����", 2, 'B'},
		new Item {5, "����", 3, 'S'},
	};
	for (size_t i = 0; i < 5; i++) if (ItemList2[i] != nullptr) ItemList2[i]->print();	// Find
	delete ItemList2[4]; ItemList2[4] = nullptr;		// Remove
	ItemList2[4] = new Item{ 3, "����", 1, 'B' };	// Add

	for (size_t i = 0; i < 5; i++) if(ItemList2[i] != nullptr) delete ItemList2[i];


	// �����Ҵ� ** // ���� �迭 // STL
}*/

// 1:1 ��Ʋ
// �÷��̾�, ���� ���� �����Ͽ�
// ���и� ������ ���α׷��� �ۼ��϶�.

// �÷��̾� - ap, hp
// ����	- ap, hp
// ��Ʋ	- while - hp <= 0
// ���ڴ� ������?

/*class Monster;	// ���漱��

class Player
{
public:
	int hp = 100;
	int ap = 10;
	void Attack(Monster& m);
};

class Monster
{
public:
	int hp = 100;
	int ap = 10;
	void Attack(Player& m);
};

void Player::Attack(Monster& m) { m.hp -= ap; }
void Monster::Attack(Player& m) { m.hp -= ap; }

int main(void)
{
	Player player;
	Monster monster;
	string winner = "";
	while (true)
	{
		player.Attack(monster);
		if (monster.hp <= 0) { winner = "player"; break; }
		monster.Attack(player);
		if (player.hp <= 0) { winner = "monster"; break; }
	}
	cout << "winner  : " << winner;
}*/

//����)
// �Һ��ڰ� ����������� 10000��¥�� ��� 2���� '�ŷ�'�Ѵ�.
// �ŷ� '��'�� '��'��
// �������� ���� �����ڿ� �Ǹ����� '��', '�������' ����϶�.

/*int buyer_money = 50000;		//��
int buyer_apple = 0;
int Seller_money = 0;
int Seller_apple = 10;				//�������

class Buyer
{
	int money = 50000;
	int apple = 0;
public:
	Buyer(int money, int apple) : money(money), apple(apple) {		}
	void Show() { cout << "money:" << money << " apple:" << apple << endl; }
	void Buy(int _money, int _apple) { money -= +money; apple += _apple; }
};

class Seller
{
	int money = 0;
	int apple = 10;
public:
	Seller(int money, int apple) : money(money), apple(apple) {		}
	void Show() { cout << "money:" << money << " apple:" << apple << endl; }
	void Sell(int _money, int _apple) { money += +money; apple -= _apple; }
};

void Trade(Buyer& buyer, Seller& seller, int price, int applenum)
{
	buyer.Buy(price, applenum);
	seller.Sell(price, applenum);
}

int main(void)
{
	Buyer buyer(50000, 0);
	Seller seller(0, 10);
	// �ŷ� '��'
	cout << "buyer: "; buyer.Show();
	cout << "seller: "; seller.Show();
	// �ŷ� + - ()
	Trade(buyer, seller, 20000, 2);
	// �ŷ� '��'
	cout << "buyer: "; buyer.Show();
	cout << "seller: "; seller.Show();
}*/

/*class MyClass
{


};

void Func(MyClass& a) {}

int main(void)
{
	MyClass myclass = MyClass();

	MyClass* p = &myclass;
	MyClass& r = myclass;

	MyClass arr[2] = { MyClass(), MyClass() };
}*/