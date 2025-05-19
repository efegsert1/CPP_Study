#include <iostream>
using namespace std;

// static 변수			// 지역 한정된 전역변수

void Counter()
{
	static int cnt;					// 프로그램 실행시 생성 // 자동 초기화
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
	mutable int num2;			// mutable로 선언된 멤버변수는 const 함수 내에서 값의 변경이  가능 ***
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
		num2 = num1;							// const 함수에서도 변경이 가능
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


// 상수 멤버 변수(constant member veriable)
//
//				상수 멤버 변수란 한 번 초기화하면, 그 값을 변경할 수 없는 멤버 변수를 의미합니다/
//
//				const double pi = 3.141592l;

// 상수 멤버 한수(const

// 클래스의 const 멤버
// const 함수내에서는 동일 클래스에 선언된 멤버변수의 값을 변경하지 못한다 ***
/*
class SimpleClass
{
	int num1;
	const int num2 = 0;			// const 멤버변수		// 초기화
public:
	SimpleClass(int n1, int n2) : num1(n1), num2(n2)
	{

	}
	void ShowData() const		// const 함수 // 멤버값 변경하지 않음 ***
	{
		cout << num1 << ' ' << num2 << endl;
		//num1++;	//error
	}
	void func1() {		}
	void func2() const {		}
};

// 상수화 된 객체 // const 객체 ***
int main(void)
{
	const SimpleClass obj1(0, 1); obj1.func1(); obj1.func2(); // const 멤버함수만 ***
		     SimpleClass obj2(0, 1); obj2.func1(); obj2.func2();

}*/

// Item class 를 만들기
//
//	index, name, level, grade 등 데이타 맴버를 추가하세요.
//	SetGrade, GetGrade, GradeUp, Show 함수를 구성하세요.
//

// Item class 를 이용하여
// 임의의 아이템을 5개 이상 생성하여 배열로 선언하고 (아이템 리스트)

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
		Item {1, "단검", 1, 'A'},
		Item {2, "단검", 2, 'A'},
		Item {3, "갑옷", 1, 'B'},
		Item {4, "반지", 2, 'B'},
		Item {5, "반지", 3, 'S'}
	};
	for (size_t i = 0; i < 5; i++) ItemList[i].print();

	// 포인터 배열	* []
	Item* ItemList2[5] =
	{
		new Item {1, "단검", 1, 'A'},
		nullptr,
		new Item {3, "갑옷", 1, 'B'},
		new Item {4, "반지", 2, 'B'},
		new Item {5, "반지", 3, 'S'},
	};
	for (size_t i = 0; i < 5; i++) if (ItemList2[i] != nullptr) ItemList2[i]->print();	// Find
	delete ItemList2[4]; ItemList2[4] = nullptr;		// Remove
	ItemList2[4] = new Item{ 3, "갑옷", 1, 'B' };	// Add

	for (size_t i = 0; i < 5; i++) if(ItemList2[i] != nullptr) delete ItemList2[i];


	// 동적할당 ** // 동적 배열 // STL
}*/

// 1:1 배틀
// 플레이어, 몬스터 서로 공격하여
// 승패를 가리는 프로그램을 작성하라.

// 플레이어 - ap, hp
// 몬스터	- ap, hp
// 배틀	- while - hp <= 0
// 승자는 누군지?

/*class Monster;	// 전방선언

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

//예제)
// 소비자가 과일장수에게 10000원짜리 사과 2개를 '거래'한다.
// 거래 '전'과 '후'의
// 구매전과 후의 구매자와 판매자의 '돈', '사과갯수' 출력하라.

/*int buyer_money = 50000;		//돈
int buyer_apple = 0;
int Seller_money = 0;
int Seller_apple = 10;				//사과갯수

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
	// 거래 '전'
	cout << "buyer: "; buyer.Show();
	cout << "seller: "; seller.Show();
	// 거래 + - ()
	Trade(buyer, seller, 20000, 2);
	// 거래 '후'
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