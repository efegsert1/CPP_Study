// ������ �����ε� (Operator Overload)
//
//			Ŭ���� ��ü�� ���� �����ڸ� ������ �� �ִ�.
//			operator Ű���� �ڿ� �����ڸ� �� '�Լ�'�� ǥ��.
//			�ǿ����ڸ� �Ű������� ����.

//	�����ε� vs �������̵�
//		�����ε� - �ٸ� �Լ��� ���� ���� �̸� ���, �ñ״��� ��ȭ
//     �������̵� - ��Ӱ��迡�� ���� �Լ� ������, �ñ״��� �� ����
#include <iostream>
using namespace std;

class MyClass
{
	int num = 0;
public:
	int Get(int a) { return num; }
	void Set(int a) { num = a; }
	MyClass operator+ (MyClass a) { MyClass n; n.Set(num + a.num); return n; }
	MyClass operator- (MyClass a) { MyClass n; n.Set(num - a.num); return n; }
	MyClass operator- () { MyClass n; n.Set(-num); return n; }

	friend ostream& operator<<(ostream& os, MyClass obj);
};

ostream& operator<<(ostream& os, MyClass obj)
{
	os << obj.num;
	return os;

}

int main(void)
{
	MyClass x; x.Set(1);
	MyClass y;
	//�Ʒ� �ڵ�ó�� ��밡���ϵ��� �����ڸ� �߰��� ���ô�.
	cout << x + y << endl;
	cout << x - y << endl;
	cout << -x << endl;
	cout << x << " " << y << endl;
	return 0;
}


/*
class MyClass
{
	int num = 0;
public:
	int Get(int a) { return num; }
	void Set(int a) { num = a; }
	MyClass operator+ (MyClass a) { MyClass n; n.Set(num + a.num); return n; }
	MyClass operator- (MyClass a) { MyClass n; n.Set(num - a.num); return n; }
	friend ostream& operator<<(ostream& os, MyClass obj);

};

ostream& operator<<(ostream& os, MyClass obj)
{
	os << obj.num;
	return os;

}

int main(void)
{
	MyClass x; MyClass y; x.Set(1); y.Set(2);
	cout << (x + y) << endl;
}*/

/*
class Pos
{
private:
	int x, y;
public:
	Pos(int x = 0, int y = 0) : x(x), y(y) {	}
	void ShowPosition() { cout << '(' << ", " << y << ')' << endl; }

	friend Pos operator+(const Pos& a, const Pos& b);
};

Pos operator+(const Pos& a, const Pos& b) { return Pos(a.x + b.x, a.y + b.y); }

int main(void)
{
	Pos pos1(1, 2);
	Pos pos2(3, 4);
	pos1.ShowPosition();
	pos2.ShowPosition();

	Pos pos3 = pos1 + pos2;
		pos3.ShowPosition();
}*/
/*
class MyClass
{
	int num;
public:
	MyClass(int x = 0) : num(x) {		}
	MyClass Add(Myclass a) {
		return MyClass(num + a.num);
	}
	friend MyClass Add(Myclass a)
};

MyClass Add(MyClass a, MyClass b)
{
	return MyClass(a.num + b.num);
}

int main()
{
	MyClass a(1);
	MyClass b(2);
	MyClass c = Add(a, b);			//error //�����ڸ� �������.
}*/

/*
class Item
{
	int uid = 0;
	string name;
public:
	Item() {}
	Item(int id, string name) : uid(id), name(name) {}
	void Print() { cout << uid << " " << name << endl; }
};

class ItemManager
{
	Item* itemlist = nullptr; // new Item[size]
		int size = 0;
public:
	ItemManager() {}
	~ItemManager() { delete[] itemlist; }
	void Add(Item item) {
		size++;
		Item* new_itemlist = new Item[size];
		for (size_t i = 0; i < size - 1; i++) new_itemlist[i] = itemlist[i];
		itemlist[size - 1] = item;
		delete[] itemlist;
		itemlist = new_itemlist;
	}
	void Print()
	{
		for (size_t i = 0; i < size; i++)
			itemlist[i].Print();
	}
};

int main()
{
	Item item01;
	Item item02;
	Item a = item01
};*/
