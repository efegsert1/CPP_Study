// private ������
//			- �����ڰ� private�̶�� ���� �ܺο����� ��ü ������ ������� �ʰڴٴ� ���̴�.
//�̱��� ����
//		  -

#include <iostream>
using namespace std;

class Student
{
private:
	int			m_id;
	string	m_name;

public:
	Student(const int& id_in, const string& name_in) : m_id(id_in), m_name(name_in)
	{}

	Student(const string& name_in) : Student(0, name_in)				 // ���� ������
	{}

};	

/*class Singleton
{
private:
	Singleton() { cout << "Singleton()" << endl; }
	Singleton(const Singleton& ref) {}
	Singleton& operator=(const Singleton& ref) {}
	~Singleton() { cout << "~Singleton" << endl; }
public:
	static Singleton& getInstance()
	{
		static Singleton s;
		return s;
	}
	int N = 0;
	void Print() {}
};

int main(void)
{
	Singleton::getInstance().N = 1;

	cout << Singleton::getInstance().N << endl;
	Singleton::getInstance().Print();


	Singleton& singe = Singleton::getInstance();

	singe.Print();
}*/

/*class ClassA
{
private:
	int num;

	ClassA(int n) : num(n) {}									// private ������
public:
	void ShowNum() const { cout << num << endl; }

	ClassA() : num(0) {}
	ClassA& CreateInitObj(int n) const
	{
		ClassA* ptr = new ClassA(n);							// �����Ҵ�
		return *ptr;
	}
};

int main(void)
{
	ClassA base;
	ClassA& obj = base.CreateInitObj(1);
}*/

/*
class ClassA
{
public:
	ClassA() { cout << "ClassA" << endl; }
	ClassA() { cout << "~ClassA" << endl; }
	void Show() { cout << "ClassA Show" << endl; }
};

class ClassB
{
private:
	ClassA& ref;										//���۷��� �ɹ� //�ɹ������� ������ �����ϱ�
	const int& num;
public:
	ClassB(ClassA& r, const int& n) : ref(r), num(n)		//�̴ϼȶ������� �̿� �ؾ��� must ***
	{
		//ref = r;		//������ �ƴ�
		//num = n;	//���� �Ұ�
	}
	~ClassB() { cout << "~ClassB" << endl; }
	void Show() { ref.Show(); }
};

int main(void)
{
	ClassA obj1;
	ClassB obj2(obj1, 20);
	obj2.Show();		////obj1 Ŭ���� �Ҹ�� ���� �߻��Ҽ� ����
	return 0;
}*/

/*class Something
{
private:
	int a1 = 0;
	//int a2(0);								 //error
	int a3{ 0 };					    	// { } �ʱ�ȭ
	int arr[3];
public:
	Something() : a1(0), a3{1}, arr{ 1,2,3 }
	{

	}
};

int main(void)
{
	int n1 = 0;			// =
	int n2(0);			// (  )
	int n3{ 0 };		// { } �ʱ�ȭ
}*/

/*struct MyStruct
{
	int val;
};

class MyClass
{
public:
	int val;
};

MyClass myclass;											//���� ��ü�� ���

int main(void)
{
	//MyStruct mystruct = { 1 };						//mystruct �ʱ�ȭ���� ����
	//cout << mystruct.val << endl;					//error

	//MyClass myclass{  };
	cout << myclass.val << endl;						//0
	return 0;
}*/

/*class CPerson
{
private:
	char*	name;
	int			age;
public:
	CPerson(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	~CPerson()
	{
		delete[] name;		//delete		//RAII ����
	}
	void ShowInfo() const { cout << "�̸�: " << name << " ����: " << age << endl; }
};

int main()
{
	char name[] = "����";
	CPerson man(name, 17);
	man.ShowInfo();
}*/

//�ɹ��� �����ͺ����� �ִ� ��� - ���� ���ָ� �����϶�

//RAII ����
// ���ҽ� ȹ���� �ʱ�ȭ��.
// (Resourse Acquistion Is Intiialization)
// �ڿ��� �ʿ���

/*class Number
{
	int num = 1;							//1. �⺻ �ʱ�ȭ
	float f = 0.0f;
public:
	Number() : num(1), f(3.14)				//2. �ݷ� �ʱ�ȭ, �ɹ� �ʱ�ȭ ����Ʈ(��õ)
	{
		cout << "Number()" << endl;
	}
	Number(int n) : num(n)
	{
		cout << "Number(int)" << endl;
	}
	Number(int n, float f) : num(n), f(f)
	{
		cout << "Number(int, float)" << endl;
	}
	~Number() {
		cout << "~Number() " << num << endl;
	}
	void Print() { cout << num << endl; }
};

int main()
{
	Number n;
	Number one(2);
	Number two(3, 2.4f);
}*/